// 1 unique element , rest elements are twins  so array size remains odd always
#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int find_unique(int arr[], int size)

{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = (unique ^ arr[i]);
    }
    return unique;
}
int main()
{
    int odd[11] = {3, 7, 3, 5, 1, 7, 5, 1, 2, 8, 2};
    printarray(odd, 11);
    cout << "the unique number is :" << find_unique(odd, 11);
    return 0;
}