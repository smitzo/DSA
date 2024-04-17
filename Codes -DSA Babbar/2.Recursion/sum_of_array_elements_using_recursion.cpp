#include <iostream>
using namespace std;

int sum_calc(int arr[], int size)
{
    int sum = 0;
    // base case
    if (size <= 0 )
    {
        return 0 ;
    }
    else
    {
        sum += sum_calc(arr, size-1 ) + arr[size -1] ;
        return sum;
    }
}

int main()
{
    int array1[6] = {1, 2, 3, 4, 5, 6};
    cout << "sum of array elements is" << sum_calc(array1, 6 );
}