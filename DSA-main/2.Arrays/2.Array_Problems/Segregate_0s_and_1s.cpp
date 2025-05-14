//https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
// You are given an array of 0s and 1s in random order. Segregate 0s on left side
//  and 1s on right Modify the array in-place. Traverse array only once. 
// Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]   Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 

#include<bits/stdc++.h>
using namespace std;
void segregateFunction(vector <int>&arr){

    int p=0;
    int q=arr.size()-1;

    while (p<=q){

        if (arr[p]==1 && arr[q]==0){
            swap(arr[p++],arr[q--]);
        }
        else if (arr[p]==0){
            p++;
        }
        if (arr[q]==1){
            q--;
        }

    }
    
}
void printArray(vector<int>&arr){
        for (int i=0;i<arr.size();i++){
            cout<<arr[i]<<endl;
        }
}
int main(){
    vector<int> arr1={0, 0,0,0,0,0};
    segregateFunction(arr1);
    printArray(arr1);
    return 0;

}