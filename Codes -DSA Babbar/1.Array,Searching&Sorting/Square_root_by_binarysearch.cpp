// C++ implementation to find
// square root of given number
// upto given precision using
// binary search.
#include <bits/stdc++.h>
using namespace std;

// Function to find square root
// of given number upto given
// precision
float squareRoot(int number) //,int precision)
{
    int start = 0, end = number;
    int mid;
    float ans;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (mid * mid == number)
        {
            ans = mid;
            break;
        }

        if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }

        else
        {
            end = mid - 1;
        }
    }
}

/*
    float increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }

        // loop terminates when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
*/
int main()
{
    cout << squareRoot(50) << endl;

    cout << squareRoot(10) << endl;

    return 0;
}
