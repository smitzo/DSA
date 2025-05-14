// Part 3: Space Optimization

// If we closely look at the relation,

// dp[i] =  dp[i-1] + dp[i-2]

// we see that for any i, we do need only the last two values in the array. So is there a need to maintain a whole array for it? 

// The answer is ‘No’. Let us call dp[i-1] as prev and dp[i-2] as prev2. Now understand the following illustration.

// Each iteration’s cur_i and prev becomes the next iteration’s prev and prev2 respectively.
// Therefore after calculating cur_i, if we update prev and prev2 according to the next step, we will always get the answer. 
// After the iterative loop has ended we can simply return prev as our answer.


#include <bits/stdc++.h>

using namespace std;


int main() {

  int n=5;
  
  int prev2 = 0;
  int prev = 1;
  
  for(int i=2; i<=n; i++){
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  cout<<prev;
  return 0;
}


// Time Complexity: O(N)

// Reason: We are running a simple iterative loop

// Space Complexity: O(1)

// Reason: We are not using any extra space