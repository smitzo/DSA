#include <iostream>
using namespace std;
int size;
int add(int a[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {2, 7, 1, -4, 11};
    cout << add(arr);
    return 0;
}