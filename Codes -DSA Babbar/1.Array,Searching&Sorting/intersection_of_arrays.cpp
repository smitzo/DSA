#include <iostream>
using namespace std;

void intersecn(int arr1[], int arr2[], int m, int n)
{

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i];
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }
}
int main()
{
    int list1[5] = {12345};
    int list2[3] = {345};
    intersecn(list1, list2, 5, 3);
    return 0;
}