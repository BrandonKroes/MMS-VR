using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using System.Runtime.InteropServices;
using System.Threading;
using Mirror;
using Script.Coroutine;
using Script.Generics;
using TMPro;
using UI;
using Unity.XR.CoreUtils;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;


public class FurnitureManager : SingletonMonoBehaviour<FurnitureManager>
{
// TODO: A gigantic array of all the furninture items

    private string activeCategory;

    //Button 


    //SubMeny reference
    public GameObject categoryMenu;
    public GameObject subMenu;
    public GameObject category_prefab;
    public GameObject submenu_prefab;
    private Dictionary<string, List<Furniture>> furnitures;


    // Start is called before the first frame update
    void Start()
    {
        this.furnitures = new Dictionary<string, List<Furniture>>();
        activeCategory = "";
        DummyContent();
        FurnitureCategories();
        FurnitureItems();
        HideUnwantedFurnitureItems();
    }

    public void FurnitureCategories()
    {
        foreach (var furniture_category in this.furnitures)
        {
            var button = Instantiate(category_prefab, categoryMenu.transform, false);
            button.name = furniture_category.Key;
            button.GetComponentInChildren<TextMeshProUGUI>().text = furniture_category.Key;
            button.GetComponent<RectTransform>().sizeDelta = new Vector2(5f, 3f);
            button.AddComponent<CategoryButton>();
            button.SetActive(true);
        }
    }


    public void FurnitureItems()
    {
        foreach (var furniture_category in this.furnitures)
        {
            foreach (var furniture in furniture_category.Value)
            {
                var button = Instantiate(submenu_prefab, subMenu.transform, false);
                button.tag = furniture_category.Key;
                button.name = furniture.getSlugName();
                button.GetComponentInChildren<TextMeshProUGUI>().text = furniture.getSlugName();
                button.GetComponent<RectTransform>().sizeDelta = new Vector2(5f, 3f);
                button.SetActive(true);
                button.AddComponent<SubMenuButton>();
            }
        }
    }

    public void ChangeCategory(string newCategory)
    {
        if (activeCategory == newCategory)
        {
            activeCategory = "";
        }
        else
        {
            activeCategory = newCategory;
        }

        HideUnwantedFurnitureItems();
        HideUnwantedCategoryItems();
    }


    public void HideUnwantedFurnitureItems()
    {
        foreach (Transform child in subMenu.transform)
        {
            if (child.gameObject.tag != activeCategory)
            {
                child.gameObject.SetActive(false);
            }
            else
            {
                child.gameObject.SetActive(true);
            }
        }
    }

    public void HideUnwantedCategoryItems()
    {
        if (activeCategory == "")
        {
            foreach (Transform child in categoryMenu.transform)
            {
                child.gameObject.SetActive(true);
            }
        }
        else
        {
            foreach (Transform child in categoryMenu.transform)
            {
                if (child.name != (activeCategory))
                {
                    child.gameObject.SetActive(false);
                }
                else
                {
                    child.gameObject.SetActive(true);
                }
            }
        }
    }

    public void DeleteFurnitureItems(GameObject obj)
    {
        foreach (Transform child in obj.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
    }


    //Fill data for testing
    public void DummyContent()
    {
        Status s = Status.TOBEDOWNLOADNED;

        furnitures = new Dictionary<string, List<Furniture>>()
        {
            {
                "Beds", new List<Furniture>()
                {
                    new Furniture("Hemnes", "https://brandonkroes.com/MMS/beds/Hemnes Bed.obj", s),
                    new Furniture("Sorum Queen Bed",
                        "https://brandonkroes.com/MMS/beds/IKEA-Sorum_Queen_Bed_Frame-3D.obj", s),
                    new Furniture("Grankulla",
                        "https://brandonkroes.com/MMS/beds/IKEA-Grankulla_Futon_Single_Bed-3D.obj", s),
                }
            },
            /*
            {
                "Drawers", new List<Furniture>()
                {
                    new Furniture("Alex", "https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white.obj", s),
                    new Furniture("Lixhult", "https://brandonkroes.com/MMS/drawer/IKE160175.obj", s), 
                    //new Furniture("Alex Small", "IKEA-Alex_drawer_white-3D.obj", s),
                    //new Furniture("Alex Small", "IKEA-Alex_drawer_white-3D.obj", s)
                }
            } ,*/
            {
                "Wardrobes", new List<Furniture>()
                {
                    //new Furniture("Aneboda", "https://brandonkroes.com/MMS/wardrobe/Aneboda_Chest_of_3_Drawers_obj/IKEA-Aneboda_Chest_of_3_Drawers-3D.obj", s),
                    new Furniture("Kallax", "https://brandonkroes.com/MMS/wardrobe/KALLAX.obj", s),
                    new Furniture("Pax", "https://brandonkroes.com/MMS/wardrobe/IKEA-Pax_Eikesdal_Wardrobel-3D.obj", s),
                    new Furniture("Hopen", "https://brandonkroes.com/MMS/wardrobe/Hopen_Wardrobe_obj/IKE070015.obj", s),
                }
            },
            {
                "Tables", new List<Furniture>()
                {
                    new Furniture("Gateleg",
                        "https://brandonkroes.com/MMS/tables/Gateleg_Table_and_Bertil_Chairs_obj/IKE010005_obj/IKEA-Gateleg_table_and_Bertil_Chairs-3D.obj",
                        s),
                    new Furniture("Linnmon",
                        "https://brandonkroes.com/MMS/tables/LINNMON_ADILS_Table_obj/IKE160119_obj/IKE160119.obj", s),
                    new Furniture("Norden",
                        "https://brandonkroes.com/MMS/tables/NORDEN_Folding_Table_obj/IKE160098_obj/IKE160098.obj", s),
                    new Furniture("Torsby",
                        "https://brandonkroes.com/MMS/tables/Torsby_Table_and_4_Chairs_obj/IKE010020_obj/IKEA-Torsby_Table_and_4_chairs-3D.obj",
                        s)
                }
            },
        };
    }

    public Furniture GetFurnitureBySlug(string slug)
    {
        foreach (var furniture_category in this.furnitures)
        {
            foreach (var furniture in furniture_category.Value)
            {
                if (furniture.getSlugName() == slug)
                {
                    return furniture;
                }
            }
        }

        return new Furniture("", "", Status.TOBEDOWNLOADNED);
    }
}