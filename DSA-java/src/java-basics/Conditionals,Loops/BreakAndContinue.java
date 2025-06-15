public class BreakAndContinue {
    public static void main(String[] args) {
        
        // break: the moment you execute break, you exit the current loop
        System.out.println("Demonstrating break:");
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                System.out.println("Breaking at i = " + i);
                break; // Exit the loop when i is 5
            }
            System.out.println("i = " + i);
        }

        // continue: skips the rest of the current iteration and jumps to the next loop cycle
        System.out.println("\nDemonstrating continue:");
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                System.out.println("Skipping i = " + i);
                continue; // Skip the rest of the loop when i is 5
            }
            System.out.println("i = " + i);
        }
    }

}
