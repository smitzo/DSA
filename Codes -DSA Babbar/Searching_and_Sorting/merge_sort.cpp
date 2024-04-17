
// divide and conquer

#include<iostream>
using namespace std;

void merge_sort(int arr[], int start, int end)  // this func divides arr into 2 parts. left half [start to mid] and right half  [mid+1 to end]
{
    if (start<=end) //base case
        return;
    int mid = (start + end) / 2;
    
    merge_sort(arr, start, mid);    //left half
    merge_sort(arr, mid + 1, end);  //right half
    merge(arr, start, mid, end);    
}

void merge(int arr[], int start,int mid,int end)
{
    


}

int main()
{

}