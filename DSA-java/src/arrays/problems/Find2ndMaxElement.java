// package problems;
// package arrays;
public class Find2ndMaxElement {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8};
        int ans = find2ndMax(arr);
        System.out.println(ans);
    }
    private static int find2ndMax(int[]arr){
        int max1=arr[0];
        int max2=arr[0];

        for (int i=0;i<arr.length;i++){
            if (arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }
            else if (arr[i]<max1 && arr[i]>max2){
                max2 = arr[i];
            }
        }
        return max2;
    }
}
