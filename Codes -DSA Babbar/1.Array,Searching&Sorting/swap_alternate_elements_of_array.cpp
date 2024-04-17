#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

void swap_alternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int odd[6] = {
        1,
        2,
        3,
        4,
        5,
    };
    printarray(odd, 5);
    cout << endl;
    swap_alternate(odd, 5);
    printarray(odd, 5);
    return 0;
}