/*https://leetcode.com/problems/two-sum/description/
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1: Input: nums = [2,7,11,15], target = 9 Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2: Input: nums = [3,2,4], target = 6 Output: [1,2]

Example 3: Input: nums = [3,3], target = 6 Output: [0,1]
 

Constraints:
2 <= nums.length <= 104, -109 <= nums[i] <= 109, -109 <= target <= 109 Only one valid answer exists.

-------------------BRUTE FORCE  ---------------------------------
vector<int>result;
for (int i=0;i<nums.size();i++){
    for (int j=0;j<nums.size();j++){
    if (arr[i]+arr[j]==target){
    result.push_back(i,j);
    }
    
    }
}
return result;

*/



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;    // empty HashMap to store the value and its index
        vector<int> result; 

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement of the current number

            
            if (map.find(complement) != map.end()) {// Check if the complement is already in the HashMap
                
                result.push_back(map[complement]);  // If the complement is found, return the indices of the current number and its complement
                result.push_back(i);
                return result;
            }
            
            map[nums[i]] = i;   // If the complement is not found, add the current number and its index to the HashMap
        }

        return result; 
    }
};
