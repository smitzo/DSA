#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Global vector to store all subsets
vector<vector<int>>ans;

/* BACKTRACKING is the process of undoing the last decision you made in a recursive algorithm so that
 you can explore other possible decisions. In this context, after you've added an element to the subset 
 (subset.push_back(nums[i]);) and explored all the subsets that include that element, you need to backtrack 
 by removing that element (subset.pop_back();) before trying the next possibility.

This ensures that the subset vector is restored to its state before including nums[i], so the function can correctly generate subsets that do not include nums[i] after it has already generated those that do.
*/

// Recursive function to generate all subsets
void generateSubsets(vector<int>& subset, vector<int>& nums, int i) {
    // Base case: If we have considered all elements
    if (i == nums.size()) {
        ans.push_back(subset); // Add the current subset to the list of subsets
        return;
    }

    // Recursive case 1: Exclude the element at index i
    generateSubsets(subset, nums, i + 1); // Move to the next element without including nums[i]

    // Recursive case 2: Include the element at index i
    subset.push_back(nums[i]);  // Add nums[i] to the current subset
    generateSubsets(subset, nums, i + 1); // Move to the next element including nums[i]

    // Backtracking step: Remove the last added element
    // This step ensures that subset is restored to its state before including nums[i],
    // allowing the function to explore other possibilities (like excluding nums[i] again)
    subset.pop_back();
}

int main () {
    vector<int> nums = {1, 2, 3};  // Input set
    vector<int> empty;  // Start with an empty subset
    generateSubsets(empty, nums, 0);  // Generate all subsets

    // Print all subsets
    for (auto i : ans) {
        cout << "{";
        for (auto j : i) {
            cout << j << "";  // Print each element of the subset
        }
        cout << "}" << endl;  // Print a closing brace for each subset
    }
    return 0;
}
