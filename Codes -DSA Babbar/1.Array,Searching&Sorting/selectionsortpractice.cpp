#include <iostream>
using namespace std;

void selection_sort(int arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        int min_index = i;
        
            for (int j=i+1; j<size; j++)
            {
                if (arr[j]<arr[min_index])
                {
                min_index = j;
                }
            }
            swap(arr[min_index],arr[i]);
    }
}
void printarray(int arr[],int size)
{
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << endl;
    }
}
int main ()
{
    int arr1[8] = {1, 5, 9, 2, 60, 8, 0,69};

    selection_sort(arr1,8);
    printarray(arr1, 8);
}