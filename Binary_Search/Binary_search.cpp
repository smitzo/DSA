// Binary Search works only on sorted arrays or sorted dqta.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        { // search in left half
            end = mid;
        }

        else if (arr[mid] < key)
        { // search in right half
            start = mid + 1;
        }

        else
            return -1; // key not found
    }
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ans = binarySearch(arr1, 10, 8);
    cout << "key element found at index:" << ans << endl;
}