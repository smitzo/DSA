#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // refer notes of binary search if confused here.
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; // for leftmost occurence
        }
        if (key > arr[mid])
        {
             start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // refer notes of binary search if confused here.
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // for rightmost occurence
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int odd[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "the first occurence of '3'is at index " << firstocc(odd, 11, 3) << endl;
    cout << "the last occurence of '3'is at index " << lastocc(odd, 11, 3) << endl;

    return 0;
}
