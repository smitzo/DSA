#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    cout << *p;

    return 0;
}
