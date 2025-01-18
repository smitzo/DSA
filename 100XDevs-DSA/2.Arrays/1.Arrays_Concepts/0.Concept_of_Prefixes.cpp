/*
--> PREFIX
prefix is continuous segment of an array that  ALWAY STARTS WITH INDEX 0
arr={1,2,3,4,5}
prefixes: {1}, {1,2}, {1,2,3}, {1,2,3,4}, {1,2,3,4,5}

--> PREFIX SUM
prefix_sum[i]=sum of all elements of arr from 0 to i
prefix_sum[i]=arr[0]+arr[1]+arr[2]+...arr[i]
arr= 2,3,7,5
prefix sum = 2,5,12,17 (2,2+3,2+3+7,2+3+7+5)

*/

#include<iostream>
#include<array>
using namespace std;

int calcPrefix_sum(int arr[], int n){
    
    int sum;
    int prefixSumArr[n];
    sum= prefixSumArr[0]=arr[0];
    
    for (int i=1;i<n;i++){  // dont write for (int i=0) since arr[i-1] will be arr[-1] i.e. out of bounds
        prefixSumArr[i]=prefixSumArr[i-1]+arr[i];
        sum+=arr[i];
        //prefixSumArr[i]=sum;
    }
    for (int i=0;i<n;i++){
        cout<<prefixSumArr[i];
    }
    cout<<"sum is :"<< sum;
    return 0;

}
int main(){
    int arr1[]={2,3,7,5};
    int n= sizeof(arr1)/sizeof(int);
    calcPrefix_sum(arr1,n);
    
}