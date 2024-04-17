#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for (int i = 1; i < size - 1;i++) // rounds or current element

    {
        for (int j = 0; j <size-i ;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printarray(int arr[],int size)

{
    for (int i = 0; i < size;i++)
    {
        cout << " " << arr[i];
    }
}

int main ()
{
    int array[8] = {4, 2,  7, 6, 1, 3, 0, 5};
    bubble_sort(array, 8);
    printarray(array, 8);
    return 0;
}