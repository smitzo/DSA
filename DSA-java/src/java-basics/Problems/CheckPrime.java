// package Problems;

public class CheckPrime {
    public static void main(String[] args) {
        int num = 997;
        boolean ans1 = isPrime1(num);
        boolean ans2 = isPrime2(num);

        System.out.println(ans1);
        System.out.println(ans2);

    }
    //Brute force approach
    private static boolean isPrime1(int n){
        if (n<=1)return false;
        if (n==2) return true;
        int i=3;
        while(i<=n){
            if (n%i==0){
                return false;
            }
            i++;
        }
        return true;
    }
    //Optimized approach
    private static boolean isPrime2(int n){
        if (n<=1)return false;
        if (n==2) return true;
        int i=3;
        while(i<=Math.sqrt(n)){
            if (n%i==0){
                return false;
            }
            i++;
        }
        return true;
    }
}
