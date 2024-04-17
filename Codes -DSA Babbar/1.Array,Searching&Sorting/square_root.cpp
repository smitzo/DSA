#include <iostream>
using namespace std;

int sqroot(int num)
{
    int start = 0;
    int end = num;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        int square = mid * mid;

        if (square == num)
        {
            ans = mid;
            break;
        }
        else if (square < num)
        {
            start = mid + 1;
            ans = mid; // store value of mid
        }

        else // (square > num)
        {
            end = mid - 1;
        }

        int mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    int number = 36;
    cout << "square root of " << number << " is :" << sqroot(36);
    return 0;
}