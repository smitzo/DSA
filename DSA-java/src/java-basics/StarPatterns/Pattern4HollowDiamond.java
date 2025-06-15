/*
**** ****
**     **
*       *
*       *
**     **
**** ****

 */
public class Pattern4HollowDiamond {
    public static void main(String[] args) {
        int n = 4;
        printDoubleInversePyramid(n);
    }

    private static void printDoubleInversePyramid(int n) {
        int totalRows = 2 * n - 1;
        int numStars = n;
        int middleSpaces = 1;

        for (int i = 1; i <= totalRows; i++) {
            // Print left stars
            for (int j = 1; j <= numStars; j++) {
                System.out.print("*");
            }

            // Print middle spaces
            for (int j = 1; j <= middleSpaces; j++) {
                System.out.print(" ");
            }

            // Print right stars
            for (int j = 1; j <= numStars; j++) {
                System.out.print("*");
            }

            System.out.println();

            // Update counts for next row
            if (i < n) {
                numStars--;
                middleSpaces += 2;
            } else {
                numStars++;
                middleSpaces -= 2;
            }
        }
    }
}
