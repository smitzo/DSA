#include <iostream>
#include <vector>
using namespace std;

vector<int> findtriplets(int arr[], int size, int sum)
{
    vector<int> ans;
    for (int i = 0; i < size-2; i++)
    {
        for (int j = i + 1; j < size-1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                }
                else
                    cout << "no pairs found";
            }
        }
    }

    return ans;
}
int main()
{
    int array[5] = {12, 4, 1, 6, 9};
    findtriplets(array, 5, 22);

    return 0;
} 











