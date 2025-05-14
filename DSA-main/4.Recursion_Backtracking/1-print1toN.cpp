#include <iostream>
using namespace std;

//Backtracking Example: Uses recursion to handle smaller values first and prints values in ascending order after recursion returns. 
//This approach is useful in scenarios where you need to explore all possibilities or handle multiple levels of recursive calls.
void printNum(int i, int n) {
    // Base Case: If i is greater than n, stop the recursion
    if (i > n) {
        return;
    }
    
    // Print the current value of i
    cout << i << endl;
    
    // Recursive Call: Call function with i+1 to handle the next number
    printNum(i + 1, n);
}

int main() {

    // Start the recursive function to print numbers from 1 to 10
    printNum(1, 5);
}

/*DRY RUN OF CODE :

Call: printNum(1, 5)

Check: i > n → 1 > 5 is false, so continue.
Print: 1
Recursive Call: printNum(2, 5)
Call: printNum(2, 5)

Check: i > n → 2 > 5 is false, so continue.
Print: 2
Recursive Call: printNum(3, 5)
Call: printNum(3, 5)

Check: i > n → 3 > 5 is false, so continue.
Print: 3
Recursive Call: printNum(4, 5)
Call: printNum(4, 5)

Check: i > n → 4 > 5 is false, so continue.
Print: 4
Recursive Call: printNum(5, 5)
Call: printNum(5, 5)

Check: i > n → 5 > 5 is false, so continue.
Print: 5
Recursive Call: printNum(6, 5)
Call: printNum(6, 5)

Check: i > n → 6 > 5 is true, so return without printing 

