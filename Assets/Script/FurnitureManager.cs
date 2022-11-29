using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using Script.Coroutine;
using Script.Generics;
using TMPro;


public class FurnitureManager : SingletonMonoBehaviour<FurnitureManager>
{
// TODO: A gigantic array of all the furninture items


    //Button 
    private List<GameObject> _buttons;
    //SubMeny reference
    public GameObject subMenu;

    public GameObject category_prefab;
    private Dictionary<string, List<Furniture>> furnitures;


    // Start is called before the first frame update
    void Start()
    {
        this.furnitures = new Dictionary<string, List<Furniture>>();
        _buttons = new List<GameObject>();

        Fill();
        //int i = 0;
        foreach(var furniture_category in this.furnitures)
        {

            var button = Instantiate(category_prefab);
            button.transform.SetParent(subMenu.transform);
            button.name = furniture_category.Key; //GetComponentInChildren<TextMeshPro>().text = furniture_category.Key;
            button.GetComponentInChildren<TextMeshProUGUI>().text = furniture_category.Key;
            button.SetActive(true);

            //if (button == null) continue;
            /*button.GetComponent<TextMeshPro>().text = furniture_category.Key;
            button.transform.localScale = Vector3.one;
            button.transform.localRotation = Quaternion.Euler(Vector3.zero);
            button.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(i, i, 0);
            i += 20;
            */
        }
    }

    /*
    void GetFurniture(Furniture furniture)
    {

        if (furniture.rQType == ) { }
        
            
            var x = new OBJRequest("https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.obj",,
                "IKEA-Alex_drawer_white-3DMTL");
        x.ExecuteRequest(_monoBehaviour);

        AssetManager.Instance.GetAsset()

        OBJRequestCoroutine.GetRequest(
            new OBJRequest(
                item.getUrl(),
                item.getSlugName()
                ))
    }

    */
    // Update is called once per frame
    void Update()
    {
        
    }

    //Fill data for testing
    public void Fill()
    {
        Status s = Status.TOBEDOWNLOADNED;

        Furniture bed1 = new Furniture("IKEA-Alex_drawer_white-3D", "https", s);
        Furniture bed2 = new Furniture("Rashid_bed", "https", s);

        Furniture drawer1 = new Furniture("Setki_Drawer", "https", s);
        Furniture drawer2 = new Furniture("Setki_Drawer", "https", s);

        Furniture door1 = new Furniture("Brandon_door", "https", s);
        Furniture door2 = new Furniture("Brandon_door", "https", s);

        List<Furniture> beds = new List<Furniture>()
            {
               bed1,
               bed2
            };

        List<Furniture> drawers = new List<Furniture>()
            {
               drawer1,
               drawer2
            };

        List<Furniture> doors = new List<Furniture>()
            {
               door1,
               door2
            };

        furnitures = new Dictionary<string, List<Furniture>>(){
                {"Bed",beds},
                 {"Drawers",drawers},
                  {"Doors",doors}
             };
    }

}
