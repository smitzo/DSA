public class checkPalindrome {
    public static void main(String[] args) {
        String s = "nayan";
        boolean ans = isPalindrome(s);
        System.out.println(ans);
    }   

    public static boolean isPalindrome(String str) {
        int start = 0;
        int end = str.length() - 1;
        
        while (start <= end) {
            if (str.charAt(start) != str.charAt(end)) {
                return false;
            }
            start++;  // Move forward
            end--;    // Move backward
        }
        
        return true;
    } 
}
