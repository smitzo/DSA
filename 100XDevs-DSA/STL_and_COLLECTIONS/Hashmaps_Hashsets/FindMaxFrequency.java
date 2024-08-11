import java.util.*;
public class FindMaxFrequency {

    public static void main(String[] args) {

        int arr[]=new int[]{1,1,2,3,4,4,4,4,4,4,4,4,4};
        int count=0;
        Map <Integer,Integer>freqMap=new HashMap<Integer,Integer>();

        for (int element:arr ){
            if (freqMap.containsKey(element)){
                count=freqMap.get(element);
                freqMap.put(element,count+1);
            }
            else {
                freqMap.put(element,1);
            }
        //----------OR-----------
        // for (int element:arr){
        //     freqMap.put(element,freqMap.getOrDefault(element,0)+1);
        // }
            
        }

        int maxNo=-1;
        int maxFreq=0;
        Set<Map.Entry<Integer,Integer>>set=freqMap.entrySet();

        for (Map.Entry<Integer,Integer>entry: set){
            if (entry.getValue()>maxFreq){
                maxFreq=entry.getValue();
                maxNo=entry.getKey();
                }

        }

        System.out.println("element with maximum frequency is :"+maxNo+" with frquency = "+ maxFreq);

        System.out.println(freqMap);
    }
    
}
