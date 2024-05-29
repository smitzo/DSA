// https://leetcode.com/problems/longest-palindromic-substring/description/

// 5. Longest Palindromic Substring
// Medium
// Topics
// Companies
// Hint
// Given a string s, return the longest 
// palindromic
 
// substring
//  in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"
 

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.

//substring and subsequence are different things

class Solution{
    public:

        bool isPalindrome(string s){
            int i=0;
            int j=s.size()-1;
            
            while(i<j){
                if (s[i]==s[j]){
                    return true;
                    i++;
                    j--;
                }

            }

        }
        string longestPalindrome(string s){
            //generate all substrrings
            // for each substring check whether its palindrome
            //if its palindorme update your ans
            int len=s.length();
            String longestPalindromeStr="";

            for (int i=0;i<len;i++){
                string substr="";

                for(int j=i;j<len;j++){
                    substr+=s[j]
                    if (isPalindrome(substr) && substr.length(>longestPalindromeStr.length())){
                        longestPalindromeStr=substr;
                    }
                }
            }
            return longestPalindromeStr

    }
}