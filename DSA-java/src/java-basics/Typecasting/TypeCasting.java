// package Typecasting;
public class TypeCasting {
    public static void main(String[] args) {
        int a = 100000;
        int b = 100000;

        // Case 1: int * int → int (results in overflow)
        int c = a * b;
        System.err.println("int c = a * b = " + c); // This will print an incorrect value due to overflow.

        // Case 2: int * int → assigned to long (still overflow!)
        long d = a * b;
        System.err.println("long d = a * b = " + d); // Still incorrect because multiplication is done as int.

        // Case 3: casting AFTER int multiplication (no effect on overflow)
        long e = (long)(a * b);
        System.err.println("long e = (long)(a * b) = " + e); // Still wrong; casting is done after overflow occurred.

        // Case 4: cast BEFORE multiplication (correct!)
        long f = (long)a * b;
        System.err.println("long f = (long)a * b = " + f); // Correct value: 100000 * 100000 = 10,000,000,000
    }
}
 