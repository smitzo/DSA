#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
    int i;
    int j;

    for (i = 1; i < size; i++) // rounds or current element
    {
        int temp = arr[i];  // store current element in temp variable
        
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp) // 
            {
                arr[j + 1] = arr[j]; // shift right
            }
            else
                break; 
        }
        arr[j + 1] = temp;
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int array[6] = {3, 1, 5, 2, 0, 4};
    insertion_sort(array, 6);
    printarray(array, 6);
    return 0;
}