/*Function optimization
Given an array A of N positive integers and an integer M, your task is to pick M integers from A into an array
B such that the function F given below gives the least possible value
F(B)=Max(B)-Min(B)
Print the lowest possible value of the given function F
Input format
The first line contains two positive integers N and M.
The second line contains N space-separated integers in the array A.
0<N<=100
1<M<=N
0<All<= 100
Output format
1
A single number denoting the lowest value of the given function F.
Sample input 1
85
3 4 3 8 1 15 20 3
Sample output 1
3
Explanation
The given function F is minimized when the 5 elements chos
3.1.3
Hurry up! Time remaining is less than: 5*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum value of F(B)
int findMinimumF(const vector<int>& A, int M) {
    int N = A.size();
    
    // Sort the array
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());
    
    // Initialize the minimum difference to a large value
    int minDifference = INT_MAX;
    
    // Find the minimum difference
    for (int i = 0; i <= N - M; ++i) {
        int currentDifference = sortedA[i + M - 1] - sortedA[i];
        if (currentDifference < minDifference) {
            minDifference = currentDifference;
        }
    }
    
    return minDifference;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    cout << findMinimumF(A, M) << endl;
    
    return 0;
}
