// package StarPatterns;

/* diamond n=7

      *                     1 
    * * *                   3
  * * * * *                 5
* * * * * * *               7
  * * * * *                 5
    * * *                   3
      *                     1
   
*/
public class Pattern3Diamond {

    public static void main(String[] args) {
        printPattern(45);
    }
    private static void printPattern(int n){
        int numStars=1, numSpaces=n/2;

        for (int i=1;i<=n;i++){ 
          for (int j=1;j<=numSpaces;j++){
            System.out.print(" ");
          }
          for (int k=1;k<=numStars;k++){
            System.out.print ("*");
          }
          if (i<=n/2){ //upper half
            numStars += 2; 
            numSpaces -= 1;
          }
          if (i>n/2){ //upper half
            numStars -= 2; 
            numSpaces +=1;
          }
          System.out.println("");
        } 
    }
}
