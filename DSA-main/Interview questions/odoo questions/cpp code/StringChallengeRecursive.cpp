/* Have the function StringChallenge(str) take the str parameter being passed, which will be a string containing letters
from the alphabet, and return a new string based on the following rules. Whenever a capital M is encountered,
duplicate the previous character (then remove the M), and whenever a capital N is encountered
remove the next character from the string (then remove the N). All other characters in the string will be lowercase letters.
For example: "abcNdgM" should return "abcgg". The final string will never be empty.*/

#include <iostream>
#include <string>
using namespace std;

string helperFunction(const string& str, int index, string& result) {
    if (index == str.size()) {
        return result; // Base case: if we've reached the end of the string, return the result
    }

    if (str[index] == 'M') {
        // Duplicate the previous character if 'M' is found
        if (!result.empty()) {
            result.push_back(result.back());
        }
    } else if (str[index] == 'N') {
        // Skip the next character by incrementing index
        if (index + 1 < str.size()) {
            index++; // Skip the next character
        }
    } else {
        // Add the current character to the result if it's not 'M' or 'N'
        result.push_back(str[index]);
    }

    return helperFunction(str, index + 1, result); // Recursive call to process the next character
}

string StringChallenge(string str) {
    string ans = ""; // Initialize an empty result string
    return helperFunction(str, 0, ans); // Start recursion from index 0
}

int main() {
    string str1 = "abcNdgM";   // Expected output: "abcgg"
    string str2 = "aMbNc";     // Expected output: "ab"
    string str3 = "abcdMNefg"; // Expected output: "abcdeg"

    cout << StringChallenge(str1) << endl;
    cout << StringChallenge(str2) << endl;
    cout << StringChallenge(str3) << endl;

    return 0;
}
