import java.util.*;

public class TwoSum {

    public static void main(String[] args) {
        
    }

}
class Solution{
    public int[] twoSum(int[] nums, int target){
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();

        for (int i=0;i<nums.length;i++){
            int complement=target-nums[i];
            if( map.containsKey(complement)){
                return new int[]{i,map.get(i)};

         
            map.put(nums[i],i);
                
            }
        }
        return new int[];
    }
}
