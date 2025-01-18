/* PROGRAM 2 Ticket Encoding Sequence
You are working at a ticketing company that generates unique ticket codes for various events. The ticket
codes are generated based on a specific encoding sequence.
The encoding sequence follows the recursive formula as described below:
1. The ticket code for the first ticket (ticket #1) is "A."
2. To generate the ticket code for the next ticket (ticket #2), you would use the ticket code for the
previous ticket (ticket #1). In this case, the ticket code for ticket #1 is "A," so the ticket code for ticket #2
is "1A" (one 'A').
3. For ticket #3, you would use the ticket code for ticket #2, which is "1A." Now, split it into the minimal
number of substrings, each containing exactly one unique character, i.e., "1" and "A." Now, use the
number of digits in each substring followed by the digit itself. So, for ticket # 3, the ticket code is "111A"
(three '1's and one 'A').
4. For ticket #4, you would use the ticket code for ticket #3, which is "111A." Split it into substrings with
unique characters: "111" and "A." Use the number of digits in each substring, followed by the digit itself.
Therefore, the ticket code for ticket #4 is "311A" (three '1's, one '3', and one 'A'). Continue this process to
generate the ticket codes for subsequent tickets.
Your task is to print the Nth ticket code.
INPUT
The first line of input contains positive integer N.
N is the Nth ticket.
OUTPUT
Print the ticket code.
CONSTRAINTS
1≤ N 30
Example Input
tax
Scre
*/



// Function to generate the ticket code for a given ticket number N
#include <iostream>
#include <string>
using namespace std;

// Function to generate the ticket code for a given ticket number N
string generateTicketCode(int N) {
    // Base case: First ticket code is "A"
    string ticketCode = "A";

    for (int i = 1; i < N; ++i) {
        string nextCode;
        int count = 1;

        // Loop through the current ticket code to generate the next ticket code
        for (int j = 1; j < ticketCode.length(); ++j) {
            // Check if the current character is the same as the previous one
            if (ticketCode[j] == ticketCode[j - 1]) {
                ++count;  // Increment count if they are the same
            } else {
                // Append the count and the previous character to the next code
                nextCode += to_string(count) + ticketCode[j - 1];
                count = 1;  // Reset count for the new character
            }
        }

        // Don't forget to append the last group of characters
        nextCode += to_string(count) + ticketCode.back();

        // Update the ticket code to the newly generated one
        ticketCode = nextCode;
    }

    return ticketCode;
}

int main() {
    int N;
    cout << "Enter the ticket number (1-30): ";
    cin >> N;

    if (N < 1 || N > 30) {
        cerr << "N is out of bounds. It should be between 1 and 30." << endl;
        return 1;
    }

    cout << generateTicketCode(N) << endl;

    return 0;
}
