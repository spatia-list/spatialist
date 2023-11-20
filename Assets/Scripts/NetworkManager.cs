using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
//using System.Text.Json;
using Newtonsoft.Json.Linq;
using Debug = UnityEngine.Debug;

public class Pose
{
    public Vector3 position { get; set; }
    public Quaternion orientation { get; set; }
}

public class PostIt
{
    public string id { get; set; }
    public string anchor_id { get; set; }
    public string owner { get; set; }
    public string title { get; set; }
    public string type { get; set; }
    public string text_content { get; set; }
    public string media_content { get; set; }
    public List<int> rgb { get; set; }
    public Pose pose { get; set; }
    public string _rid { get; set; }
    public string _self { get; set; }
    public string _etag { get; set; }
    public string _attachments { get; set; }
    public int _ts { get; set; }
}

public class PostItContainer
{
    public List<PostIt> postits { get; set; }
}

public class NetworkManager : MonoBehaviour
{
    // endpoint url
    private string url = "http://10.5.36.174:8000";
    // Declare a PostItViz variable
    public PostItViz postItViz;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GetPostIts());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public async Task<string> GetPostItsAsync()
    {
        using (HttpClient client = new HttpClient())
        {
            HttpResponseMessage response = await client.GetAsync(this.url+"/postits");
            response.EnsureSuccessStatusCode();
            string responseBody = await response.Content.ReadAsStringAsync();
            return responseBody;
        }
    }

    private IEnumerator GetPostIts()
    {
        Task<string> getPostItsTask = GetPostItsAsync();
        yield return new WaitUntil(() => getPostItsTask.IsCompleted);
        string postItJson = getPostItsTask.Result;

        // print the json response
        // Debug.Log(postItJson);

        // deserialize the json response
        PostItContainer postItContainer = Newtonsoft.Json.JsonConvert.DeserializeObject<PostItContainer>(postItJson);

        // print the number of postits
        Debug.Log("Total post-it count: " + postItContainer.postits.Count);

        // print the first postit
        Debug.Log("first post it title: " + postItContainer.postits[0].title);

        // print all post-its titles, text content and rgb in one line
        Debug.Log("all post-its titles:");
        foreach (PostIt postIt in postItContainer.postits)
        {
            Debug.Log(postIt.id + " title: " + postIt.title + " content: " + postIt.text_content + " color: " + postIt.rgb[0] + ", " + postIt.rgb[1] + ", " + postIt.rgb[2]);
        }
        this.postItViz.VisualizePostIts(postItContainer);
    }
}
