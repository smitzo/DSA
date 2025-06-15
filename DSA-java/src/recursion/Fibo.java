import java.lang.reflect.Array;

public class Fibo {
    public static void main(String[] args) {
        int ans1 = fib1(10); // Recursive
        int ans2 = fib2(10); // Dynamic Programming (Tabulation)
        int ans3 = fib3(10); // Space-Optimized Iterative

        System.out.println(ans1 + " " + ans2 + " " + ans3);
    }

    /**
     * Recursive approach to calculate Fibonacci number.
     * Time Complexity: O(2^n) - exponential due to overlapping subproblems.
     * Space Complexity: O(n) - due to recursion call stack.
     */
    private static int fib1(int n) {
        if (n == 0 || n == 1) return n;
        return fib1(n - 1) + fib1(n - 2);
    }

    /**
     * Dynamic Programming (Tabulation) approach.
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     * 
     * Note: Fixed issue in original version where array of size 2 was used.
     */
    private static int fib2(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int[] dp = new int[n + 1]; // Array to store Fibonacci numbers up to n
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }

    /**
     * Optimized Iterative approach using two variables.
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     * 
     * Note: Original logic was incorrect (doubling instead of summing). Fixed below.
     */
    private static int fib3(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int prev = 0, curr = 1;

        for (int i = 2; i <= n; i++) {
            int next = prev + curr;
            prev = curr;
            curr = next;
        }

        return curr;
    }
}
