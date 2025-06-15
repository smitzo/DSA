// package Datatypes;
import java.util.Scanner;

class Datatypes {
    public static void main(String[] args) {
        // Integer types (whole numbers, no decimals)
        byte num1 = 100;                // 1 byte, range: --2^7 to 2^7-1 = 128 to 127 
        short num2 = 20000;             // 2 bytes, range:-2^15 to 2^15-1 -32,768 to 32,767
        int num3 = 1_000_000;           // 4 bytes, range: -2^31 to 2^31-1 = -2,147,483,648 to 2,147,483,647
        long num4 = 9_000_000_000L;     // 8 bytes, range: -2^63 to 2^63-1 very large numbers (use 'L' suffix)

        // Decimal types (numbers with fractional parts)
        float num5 = 3.14159f;          // 4 bytes, approx 7 digits precision (single precision)
        double num6 = 3.141592653589793; // 8 bytes, approx 15-16 digits precision (double precision)

        // Print values
        System.out.println("Integer types:");
        System.out.println("byte num1 = " + num1);
        System.out.println("short num2 = " + num2);
        System.out.println("int num3 = " + num3);
        System.out.println("long num4 = " + num4);

        System.out.println("\nDecimal types:");
        System.out.println("float num5 = " + num5);
        System.out.println("double num6 = " + num6);

        // Precision example
        float f = 1.12345678f;           // float loses accuracy after ~7 digits
        double d = 1.1234567890123456;   // double holds ~15-16 digits accurately

        System.out.println("\nPrecision demonstration:");
        System.out.println("float f = " + f);
        System.out.println("double d = " + d);

        // When to use what (comments):
        /*
         * Use int or long for counting whole things (like people, items).
         * Use double for most decimal numbers (scientific, engineering calculations).
         * Use float only if memory is a constraint and rough precision is okay.
         * For exact decimal calculations (e.g., money), use BigDecimal (not shown here).
         */

        // Type Casting examples
        System.out.println("\nType Casting Examples:");

        // Widening Casting (automatic) - smaller to larger type
        int myInt = 100;
        long myLong = myInt;     // int to long (automatic)
        float myFloat = myLong;  // long to float (automatic)

        System.out.println("Widening Casting:");
        System.out.println("int to long: " + myLong);
        System.out.println("long to float: " + myFloat);

        // Narrowing Casting (explicit) - larger to smaller type (can cause data loss or overflow)
        double myDouble = 9.78;
        int myInt2 = (int) myDouble;     // double to int (explicit)
        byte myByte = (byte) myInt2;     // int to byte (explicit)

        System.out.println("\nNarrowing Casting:");
        System.out.println("double to int: " + myInt2);
        System.out.println("int to byte: " + myByte);

    }
}
