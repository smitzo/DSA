/* Problem Link: https://leetcode.com/problems/number-of-good-pairs/description/
 
Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array aregood.

Input: nums = [1,2,3]
Output: 0

Optimal solution
Instead of running 2 loops, let’s see if we can do with one loop. We are running the loop of i. 
What do we need? No. of elements on the left that are equal to arr[i] right? And what are the elements on the left? 
It is same as the elements that we have visited in the loop till now, isn’t it 🙂?
So if we can maintain a frequency for all the elements that we have visited till now, in an array called freq, 
then freq[arr[i]] can be added to the ans.

*/
