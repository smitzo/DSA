// package Problems;

//NOTE: a VARIABLE CREATED INSIDE A LOOP IS DELETD AFTER LOOP TERMINATES
public class ReverseNUmber {
    public static void main(String[] args) {    
        int n=1234;
        int ans=0, lastdigit=0;
        while(n !=0){
            lastdigit = n%10;
            ans = ans*10 + lastdigit;
            n=n/10;
        }
        System.out.println(ans  );;
    }
}
