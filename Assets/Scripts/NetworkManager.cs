using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
//using System.Text.Json;
using Newtonsoft.Json.Linq;
using Debug = UnityEngine.Debug;
using Unity.VisualScripting;

public class PoseJSON
{
    public Vector3 position { get; set; }
    public Quaternion orientation { get; set; }
}

public class PostItJSON
{
    public string id { get; set; }
    public string anchor_id { get; set; }
    public string owner { get; set; }
    public string title { get; set; }
    public string type { get; set; }
    public string text_content { get; set; }
    public string media_content { get; set; }
    public List<int> rgb { get; set; }
    public PoseJSON pose { get; set; }
    public string _rid { get; set; }
    public string _self { get; set; }
    public string _etag { get; set; }
    public string _attachments { get; set; }
    public int _ts { get; set; }
}

public class GetPostItsResponseJSON
{
    public List<PostItJSON> postits { get; set; }
}

public class AnchorJSON
{ 
    public string id { get; set; }
    public string anchor_id { get; set;}
    public string owner { get; set; }
    public string _rid { get; set; }
    public string _self { get; set; }
    public string _etag { get; set; }
    public string _attachments { get; set; }
    public string _ts { get; set; }
}

public class GetAnchorsResponseJSON
{
    public List<AnchorJSON> anchors { get; set;}
}


public class NetworkManager : MonoBehaviour
{
    // endpoint url
    public string EndpointURL;

    // username
    public string Username;

    // Start is called before the first frame update
    void Start()
    {
        if (string.IsNullOrEmpty(EndpointURL))
        {
            Debug.Log("Unassigned Endpoint URL");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private async Task<string> getPostItsAsync()
    {
        using (HttpClient client = new HttpClient())
        {
            HttpResponseMessage response = await client.GetAsync(this.EndpointURL + "/postits");
            response.EnsureSuccessStatusCode();
            string responseBody = await response.Content.ReadAsStringAsync();
            return responseBody;
        }
    }

    private async Task<string> getAnchorsAsync()
    {
        using (HttpClient client = new HttpClient())
        {
            HttpResponseMessage response = await client.GetAsync(this.EndpointURL + "/anchors/" + Username);
            response.EnsureSuccessStatusCode();
            string responseBody = await response.Content.ReadAsStringAsync();
            return responseBody;
        }
    }

    public async Task<List<PostIt>> GetPostIts()
    {
        string textResponse = await getPostItsAsync();

        // print the json response
        // Debug.Log(postItJson);

        // deserialize the json response
        GetPostItsResponseJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<GetPostItsResponseJSON>(textResponse);

        // print the number of postits
        Debug.Log("Total post-it count: " + response.postits.Count);

        // print the first postit
        Debug.Log("first post it title: " + response.postits[0].title);

        // print all post-its titles, text content and rgb in one line
        Debug.Log("all post-its titles:");
        foreach (PostItJSON postIt in response.postits)
        {
            Debug.Log(postIt.id + " title: " + postIt.title + " content: " + postIt.text_content + " color: " + postIt.rgb[0] + ", " + postIt.rgb[1] + ", " + postIt.rgb[2]);
        }
        List<PostIt> objectList = new List<PostIt>();
        for (int i = 0; i < response.postits.Count; i++)
        {
            objectList.Add(PostIt.ParseJSON(response.postits[i]));
        }

        return objectList;
    }

    public async Task<List<LocalAnchor>> GetAnchors()
    {
        string textResponse = await getAnchorsAsync();

        // print the json response
        // Debug.Log(postItJson);

        // deserialize the json response
        GetAnchorsResponseJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<GetAnchorsResponseJSON>(textResponse);

        // print the number of postits
        Debug.Log("Total anchor count: " + response.anchors.Count);

        // print the first postit
        Debug.Log("first anchor id: " + response.anchors[0].anchor_id);

        List<LocalAnchor> anchorList = new List<LocalAnchor>();
        foreach (AnchorJSON anchor in response.anchors)
        {
            anchorList.Add(new LocalAnchor(
                    anchor.anchor_id,
                    anchor.owner
                ));
        }

        return anchorList;
    }
}
