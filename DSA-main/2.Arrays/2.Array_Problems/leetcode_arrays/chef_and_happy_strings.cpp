/*Problem 2: Chef and Happy Strings
 
Problem Link: https://www.codechef.com/practice/course/strings/STRINGS/problems/HAPPYSTR
Chef has a string S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.
Determine whether Chef is happy or not
 
Example 1: Input: aeiou Output: "Happy"
Explanation: "aei" is one contiguous substring with length strictly greater than 2 and only vowels

Example 2: Input: abxy Output: "Sad"
Explanation: There is no substring of length > 2 containing all vowels
 
Brute force
Generate all substrings with length > 2 and check if anyone of them is completely made of only vowels.
 
bool checkOnlyVowels(string s) {
  // Returns true if only vowels in s, false otherwise
}

for(int i=0; i<n-2; i++) {
   for(int j=i+2, j++) {
     if (checkOnlyVowels(s.substr(i, j)) return true;
   }
}

return false;
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ans=false;
        unordered_set<char>vowels={'a','e','i','o','u'};
        
        for (int i=2;i<s.size();i++){
            
            char x1=s[i-2];
            char x2=s[i-1];
            char x3=s[i];
            
            if(vowels.count(x1) && vowels.count(x2) && vowels.count(x3)){   // .count method returns 1 if element is present in set else 0

                ans=true;
                break;
            }
        }
        
        if(ans){
            cout<<"Happy"<<endl;
        }
        else 
        cout<<"Sad"<<endl;
    }

}
