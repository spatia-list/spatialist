using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using Microsoft.MixedReality.Toolkit.Utilities;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;
using Debug = UnityEngine.Debug;

// Class to represent a pose in 3D space
public class PoseJSON
{
    // Position vector
    public Vector3 position { get; set; }
    // Orientation quaternion
    public Quaternion orientation { get; set; }
}

// Class to represent a PostIt note in JSON format
public class PostItJSON
{
    // Unique identifier
    public string id { get; set; }
    // Anchor identifier
    public string anchor_id { get; set; }
    // Owner of the PostIt note
    public string owner { get; set; }
    // Title of the PostIt note
    public string title { get; set; }
    // Type of the PostIt note
    public string type { get; set; }
    // Text content of the PostIt note
    public string text_content { get; set; }
    // Media content of the PostIt note
    public string media_content { get; set; }
    // RGB color of the PostIt note
    public List<int> rgb { get; set; }
    // Pose of the PostIt note
    public PoseJSON pose { get; set; }
    // Additional properties
    public string _rid { get; set; }
    public string _self { get; set; }
    public string _etag { get; set; }
    public string _attachments { get; set; }
    public int _ts { get; set; }
}

// Class to represent a PostIt note for upload in JSON format
public class PostItUploadJSON
{
    public string anchor_id { get; set; }
    public string owner { get; set; }
    public string title { get; set; }
    public string type { get; set; }
    public string text_content { get; set; }
    public string media_content { get; set; }
    public List<int> rgb { get; set; }
    public PoseJSON pose { get; set; }

    public static PostItUploadJSON FromObject(PostIt postIt)
    {
        List<int> rgb = new List<int>();
        rgb.Add((int)(postIt.Color.r * 255));
        rgb.Add((int)(postIt.Color.g * 255));
        rgb.Add((int)(postIt.Color.b * 255));

        PoseJSON pose = new PoseJSON();
        pose.position = postIt.Pose.position;
        pose.orientation = postIt.Pose.rotation;

        PostItUploadJSON res = new();
        res.rgb = rgb;
        res.pose = pose;
        res.anchor_id = postIt.AnchorId;
        res.owner = postIt.Owner;
        res.title = postIt.Title;
        if (postIt.Type == PostItType.MEDIA)
        {
            res.type = "media";
            res.media_content = postIt.Content;
        }
        else
        {
            res.type = "text";
            res.text_content = postIt.Content;
        }
        return res;
    }
}

public class GetPostItsResponseJSON
{
    public List<PostItJSON> postits { get; set; }
}

public class AnchorJSON
{
    public string id { get; set; }
    public string anchor_id { get; set; }
    public string owner { get; set; }
    public string _rid { get; set; }
    public string _self { get; set; }
    public string _etag { get; set; }
    public string _attachments { get; set; }
    public string _ts { get; set; }
}

public class GetAnchorsResponseJSON
{
    public List<AnchorJSON> anchors { get; set; }
}

public class NetworkManager : MonoBehaviour
{
    // endpoint url
    public string EndpointURL;

    // username
    public string Username;

    // post-it visualization
    public PostItViz postItViz;

    // Start is called before the first frame update
    void Start()
    {
        if (string.IsNullOrEmpty(EndpointURL))
        {
            Debug.Log("Unassigned Endpoint URL");
        }
        else {
            StartCoroutine(GetPostItsRunner());
        }
    }

    // Update is called once per frame
    void Update() { }

    private async Task<string> getPostItsAsync()
    {
        try
        {
            using (HttpClient client = new HttpClient())
            {
                HttpResponseMessage response = await client.GetAsync(this.EndpointURL + "/postits");
                response.EnsureSuccessStatusCode();
                string responseBody = await response.Content.ReadAsStringAsync();
                return responseBody;
            }
        }
        catch (Exception ex)
        {
            Debug.Log("NetManager - " + ex.Message);
            return "";
        }
    }

    private async Task<string> getAnchorsAsync()
    {
        try
        {
            using (HttpClient client = new HttpClient())
            {
                HttpResponseMessage response = await client.GetAsync(
                    this.EndpointURL + "/anchors/" + Username
                );
                response.EnsureSuccessStatusCode();
                string responseBody = await response.Content.ReadAsStringAsync();
                return responseBody;
            }
        }
        catch (Exception ex)
        {
            Debug.Log("NetManager - " + ex.Message);
            return "";
        }
    }

    private IEnumerator GetPostItsRunner()
    {
        // Task<string> getPostItsTask = getPostItsAsync();
        // yield return new WaitUntil(() => getPostItsTask.IsCompleted);
        // string postItJson = getPostItsTask.Result;
        // // print the json response
        // Debug.Log(postItJson);


        Task<List<PostIt>> getPostItsTask2 = GetPostIts();
        yield return new WaitUntil(() => getPostItsTask2.IsCompleted);
        List<PostIt> postIts = getPostItsTask2.Result;
        // print the number of postits
        Debug.Log("Total post-it count: " + postIts.Count);

        this.postItViz.VisualizePostIts(postIts);
    }

    public async Task<List<PostIt>> GetPostIts()
    {
        string textResponse = await getPostItsAsync();

        // print the json response
        // Debug.Log(postItJson);

        // deserialize the json response
        GetPostItsResponseJSON response = Newtonsoft
            .Json
            .JsonConvert
            .DeserializeObject<GetPostItsResponseJSON>(textResponse);

        // print the number of postits
        Debug.Log("Total post-it count: " + response.postits.Count);

        // print all post-its titles, text content and rgb in one line
        Debug.Log("all post-its titles:");
        foreach (PostItJSON postIt in response.postits)
        {
            Debug.Log(
                postIt.id
                    + " title: "
                    + postIt.title
                    + " content: "
                    + postIt.text_content
                    + " color: "
                    + postIt.rgb[0]
                    + ", "
                    + postIt.rgb[1]
                    + ", "
                    + postIt.rgb[2]
            );
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
        GetAnchorsResponseJSON response = Newtonsoft
            .Json
            .JsonConvert
            .DeserializeObject<GetAnchorsResponseJSON>(textResponse);

        // print the number of postits
        Debug.Log("Total anchor count: " + response.anchors.Count);

        List<LocalAnchor> anchorList = new();
        foreach (AnchorJSON anchor in response.anchors)
        {
            anchorList.Add(new LocalAnchor(anchor.anchor_id, anchor.owner));
            Debug.Log("Found anchor with id:" + anchor.anchor_id);
        }

        return anchorList;
    }

    public class NewLocalAnchorJSON
    {
        public string anchor_id;
        public string owner;

        public NewLocalAnchorJSON(LocalAnchor anchor)
        {
            anchor_id = anchor.anchorId;
            owner = anchor.owner;
        }
    }

    public class MessageResponseJSON
    {
        public string message { get; set; }
    }

    public async Task<bool> PostAnchor(LocalAnchor newAnchor)
    {
        try
        {
            NewLocalAnchorJSON entry = new NewLocalAnchorJSON(newAnchor);

            // encode to json
            string msg = Newtonsoft.Json.JsonConvert.SerializeObject(entry);

            // perform the request
            Debug.Log(msg);

            HttpContent content = new StringContent(msg, Encoding.UTF8, "application/json");

            // Do the actual request and await the response
            var httpClient = new HttpClient();
            var httpResponse = await httpClient.PostAsync(EndpointURL + "/anchor", content);

            // If the response contains content we want to read it!
            if (httpResponse.Content != null)
            {
                var responseContent = await httpResponse.Content.ReadAsStringAsync();

                // MessageResponseJSON res = Newtonsoft.Json.JsonConvert.DeserializeObject<MessageResponseJSON>(responseContent);
                Debug.Log(responseContent);
            }
            return true;
        }
        catch (Exception e)
        {
            Debug.Log("NetManager - " + e.Message);
            return false;
        }
    }

    public async void PostPostIt(PostIt postIt)
    {
        try
        {
            PostItUploadJSON entry = PostItUploadJSON.FromObject(postIt);

            // encode to json
            string msg = Newtonsoft.Json.JsonConvert.SerializeObject(entry);

            // perform the request
            Debug.Log(msg);

            HttpContent content = new StringContent(msg, Encoding.UTF8, "application/json");

            // Do the actual request and await the response
            var httpClient = new HttpClient();
            var httpResponse = await httpClient.PostAsync(EndpointURL + "/postit", content);

            // If the response contains content we want to read it!
            if (httpResponse.Content != null)
            {
                var responseContent = await httpResponse.Content.ReadAsStringAsync();

                // MessageResponseJSON res = Newtonsoft.Json.JsonConvert.DeserializeObject<MessageResponseJSON>(responseContent);
                Debug.Log(responseContent);
            }
        }
        catch (Exception e)
        {
            Debug.Log("NetManager - " + e.Message);
        }
    }
}
