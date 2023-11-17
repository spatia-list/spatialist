using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
using System.Text.Json;
using Debug = UnityEngine.Debug;

// public class PostIt
// {
//     public string id { get; set; }
//     public string anchor_id { get; set; }
//     public string owner { get; set; }
//     public string title { get; set; }
//     public string type { get; set; }
//     public string text_content { get; set; }
//     public string media_content { get; set; }
//     public List<int> rgb { get; set; }
//     public string _rid { get; set; }
//     public string _self { get; set; }
//     public string _etag { get; set; }
//     public string _attachments { get; set; }
//     public int _ts { get; set; }
// }

// public class PostItContainer
// {
//     public List<PostIt> postits { get; set; }
// }

public class NetworkManager : MonoBehaviour
{
    // endpoint url
    private string url = "http://10.5.36.174:8000";

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
        Debug.Log(postItJson);

        // deserialize the json response
        // PostItContainer postItContainer = JsonSerializer.Deserialize<PostItContainer>(postItJson);
    }
}
