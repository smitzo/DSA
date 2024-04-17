#include <iostream>
using namespace std;

bool binarysearch(int arr[], int start, int end, int key)
{
    // base case

    // if key not found
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    // if key is found
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key) // search in right side , start=mid+1
    {
        binarysearch(arr, mid + 1, end, key);
    }

    else //(arr[mid]>key) -> search in left side , end=mid-1
    {
        binarysearch(arr, start, mid - 1, key);
    }
}
int main()
{
    int array1[6] = {2, 4, 6, 10, 14, 18};
    int key = 16;
    cout << "present or not " << binarysearch(array1, 0, 5, key) << endl;
}