// package StarPatterns;

public class Pattern0Square { 
    public static void main(String[] args) {
        int n = 5;
        printLine(n);
        printSquare(n);
    }
    //print n * in a line
    private static void printLine(int n) {
        for (int i = 1; i <= n; i++) {
            System.out.print("* ");
        }
    }
    //print n*n square
    private static void printSquare(int n) {
        System.out.println("Print Square approach-1");
        
        // Approach 1: Nested loops directly inside the method
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print("* ");
            }
            System.out.println("");
        }

        System.out.println("Print Square approach-2");
        
        // Approach 2: Calls printLine(n) inside a loop
        for (int i = 1; i <= n; i++) {
            printLine(n);
            System.out.println("");  // Move to the next line after printing one row
        }
    }
}

/*
    Dry Run of printSquare(n) when n = 5
    
    i = 1, 2, 3, 4, 5 (Outer loop)
    j = 1, 2, 3, 4, 5 (Inner loop)
    
    ** Approach 1 (Nested loops) output:
    
    i  | i <= n | j  | j <= n | Output
    ---------------------------------
    1  | true   | 1  | true   | * 
       |        | 2  | true   | * 
       |        | 3  | true   | * 
       |        | 4  | true   | * 
       |        | 5  | true   | * 
       |        | 6  | false  | (New line)
    2  | true   | 1  | true   | * 
       |        | 2  | true   | * 
       |        | 3  | true   | * 
       |        | 4  | true   | * 
       |        | 5  | true   | * 
       |        | 6  | false  | (New line)
    3  | true   | 1  | true   | * 
       |        | 2  | true   | * 
       |        | 3  | true   | * 
       |        | 4  | true   | * 
       |        | 5  | true   | * 
       |        | 6  | false  | (New line)
    4  | true   | 1  | true   | * 
       |        | 2  | true   | * 
       |        | 3  | true   | * 
       |        | 4  | true   | * 
       |        | 5  | true   | * 
       |        | 6  | false  | (New line)
    5  | true   | 1  | true   | * 
       |        | 2  | true   | * 
       |        | 3  | true   | * 
       |        | 4  | true   | * 
       |        | 5  | true   | * 
       |        | 6  | false  | (New line)
    6  | false  |      |        | Loop ends

    ** Approach 1 Output (5x5 Square): **
    * * * * * 
    * * * * * 
    * * * * * 
    * * * * * 
    * * * * * 

    ** Approach 2 (Calling printLine inside the loop) output: **
    
    i = 1 to 5: Calls printLine(5), which prints `* * * * * ` each time.
    
    i  | i <= n | Output
    ----------------------
    1  | true   | * * * * * 
    2  | true   | * * * * * 
    3  | true   | * * * * * 
    4  | true   | * * * * * 
    5  | true   | * * * * * 
    6  | false  | Loop ends

    ** Approach 2 Output (5x5 Square): **
    * * * * * 
    * * * * * 
    * * * * * 
    * * * * * 
    * * * * * 
*/
