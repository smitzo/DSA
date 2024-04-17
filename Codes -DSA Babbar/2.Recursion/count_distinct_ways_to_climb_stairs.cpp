#include <iostream>
using namespace std;

int count(int n)
{
    // base case

    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    else
    {
        return count(n - 1) + count(n - 2);
    }
}
int main()
{
    int x;
    cout << "enter no of stairs" << endl;
    cin >> x;
    cout << "the number of ways to climb " << x << "stairs is:" << count(x);

    return 0;
}