// package Operators;
public class Operators {
    public static void main(String[] args) {
        int a = 16;
        int b = 3;

        // Integer division (wrong for precision)
        int intResult = a / b;
        System.out.println("Integer division (a / b): " + intResult); // prints 5

        // Correct: cast to double to avoid integer division
        double doubleResult1 = (double)a / b;
        System.out.println("Double division ((double)a / b): " + doubleResult1); // prints 5.333...

        // Another way: use a double literal
        double doubleResult2 = 1.0 * a / b;
        System.out.println("Double division (1.0 * a / b): " + doubleResult2);

        // Explanation: ALU performs operations based on types.
        // Since a and b are int, a / b is evaluated as integer division before any casting.
        // So (double)(a / b) would still result in 5.0 – casting after truncation doesn't help.
        double wrongCast = (double)(a / b);
        System.out.println("Wrong cast (double)(a / b): " + wrongCast); // prints 5.0
    }
}
 