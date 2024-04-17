#include <iostream>
using namespace std;

void printarray(int arr[],int size)
{
    for (int i = 0; i < size - 1;i++)  
    {
        cout << arr[i];
    }
}
void selection_sort(int arr[],int size)
{
    for (int i = 0; i < size-1;i++)
    {
        int min_index = i; // assume current element to be smallest 

        for (int j = i + 1; j < size - 1;j++)    // in the search range
        {
            if (arr[j]<arr[min_index])  // if smaller element is found than current in the search range
                min_index = j;      // store the index of smaller element in the min_index
        }
        swap(arr[i], arr[min_index]); // swap current element with actuallly appropriate smallest no.m
    }
}
int main ()
{
    int arr1[5]={1,5,4,2,3};
    selection_sort(arr1, 6);
    printarray(arr1, 6);
    return 0;
}