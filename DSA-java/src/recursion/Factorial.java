public class Factorial {
    public static void main(String[] args) {
        printFactorial(10);
    }

    private static void printFactorial(int n){
        int ans =1;
        for (int i=n;i>=1;i--){
            ans=ans*i;
        }
        System.out.println(ans);
    }
}
  