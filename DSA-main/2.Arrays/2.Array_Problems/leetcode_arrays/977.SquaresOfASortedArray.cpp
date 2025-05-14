// https://leetcode.com/problems/squares-of-a-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    //fill the result index right to left
        int n=nums.size();
        vector<int>result(n);
        int left=0;
        int right=n-1;
        int leftsq=0;
        int rightsq=0;
        int index=n-1;

        while(left<=right){

            leftsq = nums[left]*nums[left];
            rightsq= nums[right]*nums[right];
            
            if(rightsq>leftsq){ 

                result[index]=rightsq;
                right--;
            }

            else{ 
                result[index]=leftsq;
                left++;
            }

            index--;

        }
        return result;

    }
};