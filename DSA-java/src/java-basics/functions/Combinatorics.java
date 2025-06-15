// NcR = N!/(N!*(N-R)!)
// NPR = N!/(N-R!)
// NpR = NcR * R!

public class Combinatorics {

    public static void main(String[] args) {
        int n = 5;
        int r = 2;

        int ncrResult = ncr(n, r);
        int nprResult = npr(n, r);

        System.out.println("NCR(" + n + ", " + r + ") = " + ncrResult);
        System.out.println("NPR(" + n + ", " + r + ") = " + nprResult);
    }

    // Combination: nCr = n! / (r! * (n-r)!)
    private static int ncr(int n, int r) {
        int nfact = fact(n);
        int rfact = fact(r);
        int nmrfact = fact(n-r);
        return nfact / rfact * nmrfact;
    }

    // Permutation: nPr = n! / (n-r)!
    private static int npr(int n, int r) {
        int nfact = fact(n);
        int nmrfact = fact(n-r);
        return nfact / nmrfact     ;
    }

    // Factorial function
    private static int fact(int num) {
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        return factorial;
    }
}

