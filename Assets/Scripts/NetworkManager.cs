using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using Debug = UnityEngine.Debug;
using Unity.VisualScripting;
using System.IO;
using System.Net;
using System.Text;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;

public class PoseJSON
{
    // fixed size array of 3 floats without using vector3

    public List<float> position { get; set; }
    public List<float> orientation { get; set; }
}

public class PostItJSON
{
    public string id { get; set; }
    public string anchor_id { get; set; }
    public string owner { get; set; }
    public string title { get; set; }
    public string content_type { get; set; }
    public string content { get; set; }
    public List<int> rgb { get; set; }
    public PoseJSON pose { get; set; }
    public float scale { get; set; }
    public string _rid { get; set; }
    public string _self { get; set; }
    public string _etag { get; set; }
    public string _attachments { get; set; }
    public int _ts { get; set; }

}

public class SwipeJSON
{
    public string hasSwipe { get; set; }

    public PostItJSON postIt { get; set; }
}

public class PostItUploadJSON
{
    public string anchor_id { get; set; }
    public string owner { get; set; }
    public string title { get; set; }
    public string content_type { get; set; }
    public string content { get; set; }
    public List<int> rgb { get; set; }
    public PoseJSON pose { get; set; }

    public static PostItUploadJSON FromObject(PostIt postIt)
    {
        List<int> rgb = new List<int>();
        rgb.Add((int)(postIt.Color.r * 255));
        rgb.Add((int)(postIt.Color.g * 255));
        rgb.Add((int)(postIt.Color.b * 255));

        PoseJSON pose = new PoseJSON();
        // check if the Pose is not null 
        if (postIt.Pose.HasValue)
        {
            Vector3 pos = postIt.Pose.Value.position;
            pose.position = new List<float>
            {
                pos[0],
                pos[1],
                pos[2]
            };

            Quaternion rot = postIt.Pose.Value.rotation;
            pose.orientation = new List<float>
            {
                rot[0],
                rot[1],
                rot[2],
                rot[3]
            };
        }
        else
        {
            // create a float with 3 zeros
            pose.position = new List<float>
            {
                0,
                0,
                0
            };
            pose.orientation = new List<float>
            {
                1,
                0,
                0,
                0
            };
        }

        PostItUploadJSON res = new();
        res.rgb = rgb;
        res.pose = pose;
        res.anchor_id = postIt.AnchorId;
        res.owner = postIt.Owner;
        res.title = postIt.Title;
        res.content = postIt.Content;
        if (postIt.Type == PostItType.MEDIA)
        {
            res.content_type = "media";
            
        }
        else
        {
            res.content_type = "text";
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

public class HashMessageJSON
{
    public string hash { get; set; }
}


public class NetworkManager : MonoBehaviour
{
    // endpoint url
    public string EndpointURL;

    // username
    public string Username;

    public string GroupName;

    private string _lastPostItsHash;
    private string _lastAnchorsHash;



    // Start is called before the first frame update
    void Start()
    {
        if (string.IsNullOrEmpty(EndpointURL))
        {
            Debug.Log("APP_DEBUG: Unassigned Endpoint URL");
        }


    }

    // Update is called once per frame
    void Update()
    {

    }

    private async Task<string> getAsync(string endpoint)
    {

        try
        {
            using (HttpClient client = new HttpClient())
            {
                HttpResponseMessage response = await client.GetAsync(this.EndpointURL + endpoint);
                response.EnsureSuccessStatusCode();
                string responseBody = await response.Content.ReadAsStringAsync();
                return responseBody;
            }
        }
        catch (Exception ex)
        {
            Debug.Log($"APP_DEBUG:  NetManager::{endpoint} - {ex.Message}");
            return "";
        }
    }

    public async Task<String> GetAnchorsHash()
    {
        string textResponse = await getAsync("/anchorsHash");

        // deserialize the json response
        HashMessageJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<HashMessageJSON>(textResponse);
        return response.hash;
    }

    public async Task<String> GetPostItsHash()
    {
        string textResponse = await getAsync("/postitsHash");

        // deserialize the json response
        HashMessageJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<HashMessageJSON>(textResponse);
        return response.hash;
    }

    public async Task<bool> ShouldRefreshAnchors()
    {
        string newHash = await GetAnchorsHash();
        if (_lastAnchorsHash == null || newHash != _lastAnchorsHash)
        {
            _lastAnchorsHash = newHash;
            return true;
        }
        return false;
    }

    public async Task<bool> ShouldRefreshPostIts()
    {
        string newHash = await GetPostItsHash();
        if (_lastPostItsHash == null || newHash != _lastPostItsHash)
        {
            _lastPostItsHash = newHash;
            return true;
        }
        return false;
    }


    public async Task<List<PostIt>> GetPostIts()
    {
        string textResponse = await getAsync("/postits");

        // print the json response
        // Debug.Log(postItJson);

        // deserialize the json response
        GetPostItsResponseJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<GetPostItsResponseJSON>(textResponse);

        // print the number of postits
        Debug.Log("APP_DEBUG: Total post-it count: " + response.postits.Count);

        // print all post-its titles, text content and rgb in one line
        Debug.Log("APP_DEBUG: all post-its titles:");
        foreach (PostItJSON postIt in response.postits)
        {
            Debug.Log(postIt.id + " title: " + postIt.title + " content: " + postIt.content + " color: " + postIt.rgb[0] + ", " + postIt.rgb[1] + ", " + postIt.rgb[2]);
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
        string textResponse = await getAsync("/anchors/" + GroupName);

        // print the json response
        // Debug.Log(postItJson);

        // deserialize the json response
        GetAnchorsResponseJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<GetAnchorsResponseJSON>(textResponse);

        // print the number of postits
        Debug.Log("APP_DEBUG: Total anchor count: " + response.anchors.Count);


        List<LocalAnchor> anchorList = new();
        foreach (AnchorJSON anchor in response.anchors)
        {
            anchorList.Add(new LocalAnchor(
                    anchor.anchor_id,
                    anchor.owner
                ));
            Debug.Log("APP_DEBUG: Found anchor with id:" + anchor.anchor_id);
        }

        return anchorList;
    }

    public async Task<PostIt> GetSwipe()
    {
        string textResponse = await getAsync("/hasSwipe/" + Username);

        // print the json response
        Debug.Log(textResponse);

        // deserialize the json response
        SwipeJSON response = Newtonsoft.Json.JsonConvert.DeserializeObject<SwipeJSON>(textResponse);

        // print the number of postits
        Debug.Log("APP_DEBUG: New swipe available:" + response.hasSwipe);

        if (response.hasSwipe == "true")
        {
            return PostIt.ParseJSON(response.postIt);
        }

        return null;
    }


    public class NewLocalAnchorJSON
    {
        public string anchor_id;
        public string owner;

        public NewLocalAnchorJSON(LocalAnchor anchor, string groupName)
        {
            this.anchor_id = anchor.anchorId;
            this.owner = groupName;
        }
    }

    public class MessageResponseJSON
    {
        public string message { get; set; }
    }

    // POST local anchor to the DB
    public async Task<bool> PostAnchor(LocalAnchor newAnchor)
    {
        try
        {
            NewLocalAnchorJSON entry = new NewLocalAnchorJSON(newAnchor, GroupName);

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
            Debug.Log("APP_DEBUG: NetManager - " + e.Message);
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
            Debug.Log("APP_DEBUG: NetManager - " + e.Message);
        }


    }

    // Delete post-it from the DB
    public async Task<bool> DeletePostIt(PostIt postIt)
    {
        try
        {
            // Do the actual request and await the response
            var httpClient = new HttpClient();
            var httpResponse = await httpClient.DeleteAsync(EndpointURL + $"/postit/{postIt.Id}");

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
            Debug.Log("APP_DEBUG: NetManager - " + e.Message);
            return false;
        }
    }



}
