// https://leetcode.com/problems/transpose-matrix/
#include<bits/stdc++.h>
using namespace std;
// ith row becomes ith column and ith colum becomes ith row
vector<vector<int>> transpose(vector<vector<int>>& matrix) {   

    int rows=matrix.size(); // length or number of rows of original matrix
    int cols=matrix[0].size(); // length or number of columns of original matrix
    //input =matrix(rows,cols)--transpose--> output= (cols,rows)
    vector<vector<int>>output(cols,vector<int>(rows));//output vector has "cols" number of rows and 
                                                    //"rows" number of columns

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            output[j][i]=matrix[i][j];
        }
    }
    return output;

        
}


int main()
{
    
} // namespace std


  