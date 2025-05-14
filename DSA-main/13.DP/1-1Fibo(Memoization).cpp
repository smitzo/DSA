// Approach-1 Memoization

//Any recursive solution to a problem can be memoized using these three steps:

// step1 Create a dp[n+1] array initialized to -1.
// step 2 Whenever we want to find the answer of a particular value (say n), we first check whether the answer is already calculated using the dp array(i.e dp[n]!= -1 ). If yes, simply return the value from the dp array.
// step3 If not, then we are finding the answer for the given value for the first time, we will use the recursive relation as usual but before returning from the function, we will set dp[n] to the solution we get.

#include <bits/stdc++.h>

using namespace std;

int fibo(int n, vector<int>& dp){
    if(n<=1) return n;
    
    if(dp[n]!= -1) return dp[n];
    return dp[n]= fibo(n-1,dp) + fibo(n-2,dp);
}


int main() {

  int n=5;
  vector<int> dp(n+1,-1);
  cout<<fibo(n,dp);
  return 0;
}

// Time Complexity: O(N)

// Reason: The overlapping subproblems will return the answer in constant time O(1). Therefore the total number of new subproblems we solve is ‘n’. Hence total time complexity is O(N).

// Space Complexity: O(N)

// Reason: We are using a recursion stack space(O(N)) and an array (again O(N)). Therefore total space complexity will be O(N) + O(N) ≈ O(N)