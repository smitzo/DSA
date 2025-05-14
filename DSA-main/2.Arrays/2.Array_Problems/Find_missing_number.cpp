// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int N)
{
    // sum of all elements in the array
    int sumOfArrElements = 0;
    int sumOfFirstNElements = N * (N + 1) / 2;

    for (int i = 0; i < N - 1; i++)
    {
        sumOfArrElements = sumOfArrElements + arr[i];
    }

    int missingNumber = sumOfFirstNElements - sumOfArrElements;
    return missingNumber;
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 6};
    int missing = findMissingNumber(arr1, 6);
    cout << "The missing element is: " << missing << endl;
    return 0;
}
