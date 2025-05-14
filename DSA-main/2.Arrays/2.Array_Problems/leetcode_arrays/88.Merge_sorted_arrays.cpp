/*https://leetcode.com/problems/merge-sorted-array/description/

 You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
 representing the number of elements in nums1 and nums2 respectively.
 Merge nums1 and nums2 into a single array sorted in non-decreasing order.
 The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
 To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged
 , and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1: Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3 Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6]. The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2: Input: nums1 = [1], m = 1, nums2 = [], n = 0 Output: [1]
Explanation: The arrays we are merging are [1] and []. The result of the merge is [1].

Example 3: Input: nums1 = [0], m = 0, nums2 = [1], n = 1 Output: [1]
Explanation: The arrays we are merging are [] and [1]. The result of the merge is [1].

Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

Constraints:
nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109

*/

#include <bits/stdc++.h>
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        // --------------------------------------------APPROACH-1(BRUTE FORCE)-------------------------------------------- -------
        // SC o(m+N) TC o(m) + o(n) +o(m+n)log(m+n) ~ o(m+n)log(m+n)
        // vector<int>combinedArr={};
        // for (int i=0;i<nums1.size();i++){
        //     combinedArr[i]=nums1[i];
        // }
        // for (int j=0;j<nums2.size();j++){
        //     combinedArr[m+j]=nums1[j];
        // }
        // sort(combinedArr.begin(), combinedArr.end());    // nlog n
        // for (int k=0;k<m+n;k++){
        //     nums1[k]=combinedArr[k];
        // }

        //------------------------------------------------APPROACH-2-----------------------------------------------------
        // for (int j=0;j<nums2.size();j++){
        //     nums1[m+j]=nums2[j];
        // }
        // sort(nums1.begin(), nums1.end());

        //-----------------------------------------------APPROACH-3(good TC bad SC )--------------------------------------------------------
        //     int p=0;    // p pointer for nums1
        //     int q=0;    // q pointer for nums2
        //     vector<int>nums3={};
        //     while(p<m && q<n){
        //         if (nums1[p]<=nums2[q]){
        //             nums3.push_back(nums1[p]);
        //             p++;
        //         }
        //         else{
        //             nums3.push_back(nums2[q]);
        //             q++;
        //         }
        //     }
        //     while(p<m){ // if nums2 gets completed/exhausted copy nums1 content as it is
        //         nums3.push_back(nums1[p++]);
        //     }
        //     while(q<n){ // if nums1 gets completed/exhausted copy nums2 content as it is
        //         nums3.push_back(nums2[q++]);
        //     }
        //     for (int i=0;i<nums3.size();i++){
        //         nums1[i]=nums3[i];
        //     }
        // }

        //----------------------------------------------OPTIMAL SOLUTION(GOOD TC GOOD SC)
        // ex: nums1=[2,2,3,0,0] nums2=[1,5,6]
        // in this approach we ; use right to left approach find max and replace max with the 
        // element of nums2 with zeros inside nums1
        int p = m - 1; // p points to last non zero element of nums1
        int q = n - 1; // q points to last element of nums2
        int r = m+n - 1;  //r points to last element of nums1

        while (r>=0)    // start from last element of nums1 to 0th element
        {

            if (q < 0)  // all elements of nums2 are exhausted
                break;
            
            if (p >= 0 && nums1[p]>=nums2[q]) // all elements of nums1 are exhausted
                nums1[r--]=nums1[p--];

            else 
            nums1[r--]=nums2[q--];


        };
    }
    
};
// dry run 
// round1
//[1,2,3,0,0,0] nums1
//     p     r          p points to index2 r points to index 5 of nums1
//[2,5,6] nums2
//     q                q points to index 2 of nums2
// round2
//[1,2,3,0,0,6] nums1
//     p   r          p points to index 1 r points to index 4 of nums1
//[2,5] nums2
//   q                q points to index 1 of nums2
// round3
//[1,2,3,0,5,6] nums1
//     p r          p points to index 0 r points to index 3 of nums1
//[2] nums2
// q                q points to index 0 of nums2
// round4
//[1,2,2,3,5,6] nums1
