#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key) // ***************** imp line //
            return mid;

        if (key > arr[mid]) // go to right vala part
        {
            start = mid + 1;
        }

        else if (key < arr[mid]) // go to left vala part
        {
            end = mid - 1;
        }
        mid = (start + end) / 2; // update mid as it changes with updation of start or end
    }
    return -1;
}
int main()
{
    int odd[5] = {3, 8, 11, 14, 16};
    int even[6] = {2, 4, 6, 8, 12, 18};
    int indexodd = binarysearch(odd, 5, 16);
    int indexeven = binarysearch(even, 6, 12);
    cout << "index of odd is:" << indexodd << endl;
    cout << "index of even is:" << indexeven << endl;
    return 0;
}