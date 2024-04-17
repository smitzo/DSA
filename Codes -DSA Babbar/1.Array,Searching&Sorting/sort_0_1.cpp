#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {

        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)

        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "" << arr[i];
    }
}
int main()
{
    int array[10] = {1, 1, 1, 0, 1, 0, 0, 1, 1, 0};
    sort01(array, 10);
    print(array, 10);
}