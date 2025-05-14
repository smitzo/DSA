/* PROGRAM 3 Given a list of phone numbers, determine the validity of each of them without using regex or built-in phone
number parsers. The rules for validation are as follows:
1.
The number must begin with +91 or 0 or 7, 8 or 9.
2.
The number may contain spaces, but only in the national and international format as shown below.
International Format: +91 xxxxxx xxxxxXX
National Format: 0xxxxx xxxxx
3.
Apart from the spaces at certain positions and the plus symbol in +91, the rest of the phone number
must be strictly made of digits
4.
The length of the actual phone number (excluding the prefix +91, 0, as well as the spaces in formatting)
must be 10.
Refer the sample input and output to better understand these rules.
INPUT
The first line of input contains a positive integer N representing the number of phone numbers, The next N
lines of input contain phone numbers.
Note: The given strings may contain space(s). The input must be considered till the end of the line.
OUTPUT
Print the validity of each phone number in a separate line-"True" if the phone number is valid. "False"
otherwise.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to check if a phone number is valid
bool isValidPhoneNumber(const string& phoneNumber) {
    string cleanNumber;
    bool international = false;

    // Remove spaces and check for invalid characters
    for (char ch : phoneNumber) {
        if (ch == ' ') {
            continue;
        } else if (ch == '+') {
            // Check for "+91" prefix
            if (cleanNumber.empty() && phoneNumber.find("+91") == 0) {
                international = true;
                continue;
            } else {
                return false; // "+" should only be at the start for international numbers
            }
        } else if (isdigit(ch)) {
            cleanNumber += ch;
        } else {
            return false; // Invalid character found
        }
    }

    // Check if the length of the cleaned number is 10
    if (cleanNumber.size() != 10) {
        return false;
    }

    // Check prefix rules
    if (international) {
        // Ensure the cleaned number starts with "7", "8", or "9" after "+91"
        if (cleanNumber[0] != '7' && cleanNumber[0] != '8' && cleanNumber[0] != '9') {
            return false;
        }
    } else {
        // National number must start with "0"
        if (phoneNumber.find("0") != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // To ignore the newline character after the integer input

    for (int i = 0; i < N; ++i) {
        string phoneNumber;
        getline(cin, phoneNumber);
        
        if (isValidPhoneNumber(phoneNumber)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}
