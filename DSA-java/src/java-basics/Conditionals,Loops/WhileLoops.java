public class WhileLoops {
    public static void main(String[] args) {
        
        // A while loop is used to repeat a block of code as long as a specified condition is true.

        short i = 1; // Initialize the loop control variable

        // The loop will continue as long as the condition (i <= 3) is true
        while(i <= 3) {
            System.out.println(i);// This statement will be executed in each iteration of the loop.
            i++; // Increment the loop control variable to move towards the loop termination 
        }

        /*
         Loop Execution Flow:
         ---------------------------------------
         |  i (initial value) | Condition | Output |
         |--------------------|-----------|--------|
         |         1          |   true    |   1    |
         |         2          |   true    |   2    |
         |         3          |   true    |   3    |
         |         4          |   false   |  loop ends, no output |
         ---------------------------------------

         The loop stops when the condition i <= 3 becomes false.
        */
    }

    //this goes infintely since we arent incrementing the loop 
    //it stays always true so continues ifnifitely
    i = 1;
    while (i<=5){
        System.out.println(i);
        // add i++ to avoid infinite loop 
    }
}
