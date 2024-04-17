#include <iostream>
using namespace std;

bool pairsum(int arr[], int size, int sum)
{

    int l = 0;
    int r = size - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] == sum)
        {
            return 1;
        }
        else if (arr[l] + arr[r] < sum)

            l++;

        else
            r--;
    }
    return 0;
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    if (pairsum(array, 5, 9))
    {
        cout << "Array has two elements"
                " with given sum";
    }
    else
        cout << "Array doesn't have two"
                " elements with given sum";

    return 0;
}