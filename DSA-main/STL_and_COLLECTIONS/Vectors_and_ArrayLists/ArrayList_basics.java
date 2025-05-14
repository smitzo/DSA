import java.util.*;

public class ArrayList_basics {
    public static void main(String[] args) {
        // Create an ArrayList
        ArrayList<Integer > list = new ArrayList<Integer>();
        list.add(1);
        list.add(2);
        list.add(3);

        System.out.println(list);
        list.remove(0);
        System.out.println(list);

        
    }
}
