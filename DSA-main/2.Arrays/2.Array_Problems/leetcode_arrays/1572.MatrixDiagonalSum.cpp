// https://leetcode.com/problems/matrix-diagonal-sum/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int rows=mat.size();
        int cols=rows; // square matrix therefore rows=cols
        int primaryDiagonal=0;
        int secondaryDiagonal=0;

        //odd sized matrix has 1 overlapping even sized matrix doesnt have overlapping

        for (int rowNo=0;rowNo<rows;rowNo++){
            

            primaryDiagonal=mat[rowNo][rowNo];  //00,11,22,33...
            secondaryDiagonal=mat[rowNo][cols-rowNo-1]; // 01,12,23

            sum+=primaryDiagonal;
            
            if(rowNo!=cols-rowNo-1){
                sum+=secondaryDiagonal;
            }

        }
        return sum;
        
    }
};

int main(){


}