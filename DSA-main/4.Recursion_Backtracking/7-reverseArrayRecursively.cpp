#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArrayRecursively(vector<int>&arr,int start,int end){

    if (start>=end)return;
    swap(arr[start],arr[end]);
    reverseArrayRecursively(arr,start+1,end-1);
    
}
//--------------------Alternate way------------------------------
// void reverseArrayRecursively(vector<int>&arr,int start){
//     int n=arr.size();
//     if (start>=n/2)return;
//     swap(arr[start],arr[n-start-1]);
//     reverseArrayRecursively(arr,start+1);
    
// }
int main (){
    vector<int>arr1={1,2,3,4,5,6};
    for (int i:arr1){
        cout<<i<<" ";
    }
    reverseArrayRecursively(arr1,0,arr1.size()-1);

    cout<<"reverse array:"<<endl;
    for (int i:arr1){
        cout<<i<<" ";
    }
    return 0;
}