/*Have the function ArrayChallenge(arr) take the array of numbers stored in arr and return the string "Arithmetic"
if the sequence follows an arithmetic pattern or return "Geometric" if it follows a geometric pattern. 
If the sequence doesn't follow either pattern return -1. 
An arithmetic sequence is one where the difference between each of the numbers is consistent, where as in a geometric sequence, 
each term after the first is multiplied by some constant or common ratio. 
Arithmetic example: [2, 4, 6, 8] and Geometric example: [2, 6, 18, 54]. 
Negative numbers may be entered as parameters, 0 will not be entered, and no array will contain all the same elements.

**Answer:***/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ArrayChallenge(vector<int> arr) {
    if (arr.size() < 2) return "-1";
    
    // Check for Arithmetic sequence
    bool isArithmetic = true;
    int diff = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++) {
        if (arr[i] - arr[i-1] != diff) {
            isArithmetic = false;
            break;
        }
    }
    
    // Check for Geometric sequence
    bool isGeometric = true;

    float ratio = static_cast<float>(arr[1]) / arr[0];
    for (int i = 2; i < arr.size(); i++) {
        if (static_cast<float>(arr[i]) / arr[i-1] != ratio || arr[i-1]==0) {
            isGeometric = false;
            break;
        }
    }
    
    if (isArithmetic) return "Arithmetic";
    if (isGeometric) return "Geometric";
    return "-1";
}

int main() {
    vector<int> arr1 = {2, 4, 6, 8};   // Arithmetic
    vector<int> arr2 = {2, 6, 18, 54}; // Geometric
    vector<int> arr3 = {2, 5, 14, 30}; // Neither

    cout << ArrayChallenge(arr1) << endl; // Output: Arithmetic
    cout << ArrayChallenge(arr2) << endl; // Output: Geometric
    cout << ArrayChallenge(arr3) << endl; // Output: -1

    return 0;
}
