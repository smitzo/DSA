#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsequences(int index,vector<int>& ds, int currentsum, vector<int> &arr,int target){

//base case
    if (index==arr.size()){
        if  (currentsum==target){
            cout<<"{ ";
            for (int val:ds){
                cout<<val<<" ";
            }
            cout<<"}";
        }
        return;
    }

    //include 
    ds.push_back(arr[index]);
    subsequences(index+1,ds,currentsum+arr[index],arr,target);

    //exclude
    ds.pop_back();
    subsequences(index+1,ds,currentsum,arr,target);

}

int main (){
    int index=0;
    vector<int> ds={};
    int currentsum=0;
    vector<int> arr={1,2,1};
    int target=2;
    subsequences(index,ds,currentsum,arr,target);
    return 0;
}

