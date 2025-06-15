public class CountFactors {
    public static void main(String[] args) {
        int num = 24;
        int ans = countFactors(num);
        System.out.println("NUMBER OF FACTORS = " + ans);
    }
    /**
     * Counts the total number of factors of n by iterating up to sqrt(n).
     * 
     * Explanation of factor pairs:
     * Factors always come in pairs (i, n/i), e.g. for 24:
     * i    j = n/i
     * 1    24
     * 2    12
     * 3    8
     * 4    6
     * 
     * After 4*6, the pairs start repeating but swapped:
     * 6    4 (already counted as 4*6)
     * 8    3 (already counted as 3*8)
     * ...
     * 
     * So, we only need to check up to sqrt(n) to count all pairs.
     * Because:
     * If i > sqrt(n), then n/i < sqrt(n) (pairs reversed).
     * Thus, factors for i > sqrt(n) are already counted.
     * 
     * Also, if i == n/i (which means i*i == n), then i is a perfect square root
     * and should only be counted once.
     * Otherwise, count both i and n/i.
     * 
     * Loop condition alternatives:
     * - i < n/i
     * - i*i < n
     * - i < sqrt(n)
     * 
     * All represent the same stopping condition for the loop.
     */
    private static int countFactors(int n) {
        int count = 0;
        int sqrt = (int) Math.sqrt(n);

        for (int i = 1; i <= sqrt; i++) {
            if (n % i == 0) {
                int j = n / i;
                if (i == j) {// i and j are same => perfect square factor, count once
                    count += 1;
                } else {// i and j are different => count both factors
                    count += 2;
                }
            }
        }
        return count;
    } 
}
  