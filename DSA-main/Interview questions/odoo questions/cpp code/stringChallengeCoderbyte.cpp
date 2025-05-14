/* Have the function StringChallenge(str) take the str parameter being passed, which will be a string containing letters
from the alphabet, and return a new string based on the following rules. Whenever a capital M is encountered,
duplicate the previous character (then remove the M), and whenever a capital N is encountered
remove the next character from the string (then remove the N). All other characters in the string will be lowercase letters.
For example: "abcNdgM" should return "abcgg". The final string will never be empty.*/

#include <iostream>
#include <string>
using namespace std;

string StringChallenge(string str) {
    string result="";
    
    for (int i = 0; i < str.size(); i++) {
        
        if (str[i] == 'M') {
            // Duplicate the previous character
            if (!result.empty()) {
                result += result.back();
            }
        } 
        
        else if (str[i] == 'N') {
            // Remove the next character
            if (i + 1 < str.size()) {
                i++; // Skip the next character
            }
        } 
        
        else {
            // Add the current character to the result
            result += str[i];
        }

    }
    
    return result;
}

int main() {
    std::string str1 = "abcNdgM"; // Expected output: "abcgg"
    std::string str2 = "aMbNc";   // Expected output: "ab"
    std::string str3 = "abcdMNefg"; // Expected output: "abcdeg"

    std::cout << StringChallenge(str1) << std::endl;
    std::cout << StringChallenge(str2) << std::endl;
    std::cout << StringChallenge(str3) << std::endl;

    return 0;
}

