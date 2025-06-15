package problems;
public class findMax {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int ans = helper(arr);
        System.out.println(ans);
    }

    public static int helper(int[] arr) {
        int ans = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > ans) {
                ans = arr[i];
            }
        }
        return ans;
    }
}
