public class sumOfNnumbers {
    public static void main(String[] args) {
        int n = 100;
        findSum(n); 
    }          
    private static void findSum(int n){
        System.out.println(n * (n + 1) * 0.5);
    }
}

/* 
 * 1 2 3 4 5 take 1 to n
 * + + + + +
 * 5 4 3 2 1 take n to 1 in order
 * = = = = =
 * 6 6 6 6 6 
 * so sum of 1 to n is n*(n+1)/2
 * 
 * Explanation:
 * When you add the series forward and backward:
 * (1 + 2 + 3 + ... + n) + (n + (n-1) + ... + 1) = n * (n + 1)
 * Therefore, sum of the series = n*(n+1)/2
 */