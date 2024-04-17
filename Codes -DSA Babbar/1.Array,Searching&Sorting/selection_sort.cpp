#include <iostream>
#include <vector>
using namespace std;

void selection_sort1(int arr[], int n)  // increasing order
{
    for (int i = 1; i < n ; i++)    //rounds or current element
    {
        int min_index = i;  // assume that current element is smallest one and store it in min_index

        for (int j = i + 1; j < n; j++) // search range
        {
            if (arr[j] < arr[min_index]) // if an element smaller than our current element is found in the search
                min_index = j;           // range, store that index in min_index
        }
        swap(arr[min_index], arr[i]);   
    }
}
void selection_sort2(int arr[], int n) // decreasing  order
{
    for (int i = n ; i >=0; i--) // rounds or current element
    {
        int max_index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        swap(arr[max_index], arr[i]);
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "  " << arr[i];
    }
    cout << endl;
}
int main()
{
    int array1[5] = {2, 4, 1, 3, 69};
    int array2[5] = {2, 4, 1, 3, 69};
    selection_sort1(array1, 5);
    print_array(array1, 5);
    selection_sort2(array2, 5);
    print_array(array2, 5);
    return 0;
}