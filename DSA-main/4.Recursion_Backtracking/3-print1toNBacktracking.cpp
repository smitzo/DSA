#include <bits/stdc++.h>
using namespace std;

//Backtracking Example: Uses recursion to handle smaller values first and prints values in ascending order after recursion returns.
// This approach is useful in scenarios where you need to explore all possibilities or handle multiple levels of recursive calls.
void print1toNBacktracking(int i, int n) {
    // Base Case: If i is less than 1, stop the recursion
    if (i < 1) {
        return;
    }
    
    // Recursive Call: Call function with i-1 to handle smaller numbers first
    print1toNBacktracking(i - 1, n);
    // Print the current value of i after the recursive call returns
    cout << i << " ";
}

int main() {
    int n = 5; // Define the upper limit for the sequence
    // Start the recursive function to print numbers from 1 to n
    print1toNBacktracking(n, n);
}



/*DRY RUN :
Call: print1toNBacktracking(5, 5)

Check: i < 1 → 5 < 1 is false, so continue.
Recursive Call: print1toNBacktracking(4, 5)
Call: print1toNBacktracking(4, 5)

Check: i < 1 → 4 < 1 is false, so continue.
Recursive Call: print1toNBacktracking(3, 5)
Call: print1toNBacktracking(3, 5)

Check: i < 1 → 3 < 1 is false, so continue.
Recursive Call: print1toNBacktracking(2, 5)
Call: print1toNBacktracking(2, 5)

Check: i < 1 → 2 < 1 is false, so continue.
Recursive Call: print1toNBacktracking(1, 5)
Call: print1toNBacktracking(1, 5)

Check: i < 1 → 1 < 1 is false, so continue.
Recursive Call: print1toNBacktracking(0, 5)
Call: print1toNBacktracking(0, 5)

Check: i < 1 → 0 < 1 is true, so return without printing.
Return to: print1toNBacktracking(1, 5)

Print 1
Return to: print1toNBacktracking(2, 5)

Print 2
Return to: print1toNBacktracking(3, 5)

Print 3
Return to: print1toNBacktracking(4, 5)

Print 4
Return to: print1toNBacktracking(5, 5)

Print 5*/