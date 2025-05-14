
import java.util.*;
public class Hashset_basics {
    
    public static void main(String[] args) {

        Set <Integer>set=new HashSet<Integer>();
        int arr[]=new int []{1,2,2,3,3,4,5,5};

        for (int x: arr){
            set.add(x); //o(1)
        }

        set.remove(1);
        System.out.println(set);
        System.out.println(set.contains(2));    //o(1)
        System.out.println(set.isEmpty());  // o(1)

    }
}
