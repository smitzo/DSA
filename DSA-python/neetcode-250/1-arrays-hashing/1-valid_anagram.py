https://leetcode.com/problems/valid-anagram/description/
# Given two strings s and t, return true if t is an anagram of s, and false otherwise.
# Example 1:
# Input: s = "anagram", t = "nagaram"
# Output: true

# Example 2:
# Input: s = "rat", t = "car"
# Output: false

# Constraints:
# 1 <= s.length, t.length <= 5 * 104
# s and t consist of lowercase English letters.

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq = {}
        for i in s:
            freq[i] = freq.get(i, 0) + 1
        for i in t:
            if i not in freq:
                return False
            freq[i] -=1
            if freq[i] == 0:
                del freq[i]
        return len(freq) == 0
