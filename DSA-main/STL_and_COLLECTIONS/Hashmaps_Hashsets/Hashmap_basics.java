
import java.util.*;
public class Hashmap_basics{

    public static void main(String args[]){

        Map<String,Integer> map =new HashMap<String,Integer>(); //keys of map are unique
        map.put("smit",68); 
        map.put("shubham",65);
        map.put("akash",12);

        System.out.println(map.get("smit"));
        System.out.println(map.containsKey("smit"));
        System.out.println(map.containsValue(68));

        Set <Map.Entry<String,Integer>>set=map.entrySet();
        Set<String>names=map.keySet();
        System.out.println(names);


        // iterate map one by one
        for (Map.Entry<String,Integer>entry : set){

            System.out.println(entry.getKey() + ": " + entry.getValue());

        }


    }
}