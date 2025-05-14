/* PROGRAM 5 The Puzzle Masters of Puzzleville
In the bustling city of Puzzleville, a young prodigy Zoey stumbled upon a mysterious challenge left by a
renowned puzzle master. Determined to solve it, she attempted to solve it.
Her mission was to arrange the pieces in unique combinations that would sum up to a magic number
provided by the puzzle master. No piece can be used more than once in a combination. To help her crack the
puzzle and reveal the secret prize, find the numbers of unique combinations that are possible.
INPUT
The first line of input contains positive integers N, representing the number of pieces and K, representing the
magic number, separated by a space.
The next line contains the N numbers of positive integers, AD, that represent the pieces.
OUTPUT
Print the number of combinations that are possible.
CONSTRAINTS
2 <= N <= 10^5
2 <= K <= N
1 <= A[i] <= 10^9
Example Input
7 8
10 1 2 7 6 1 5
Example Output
4
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find unique combinations that sum up to the target value
void findCombinations(vector<int>& candidates, int start, int target, vector<int>& combination, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(combination);
        return;
    }
    
    for (int i = start; i < candidates.size(); ++i) {
        // Skip duplicates
        if (i > start && candidates[i] == candidates[i - 1]) {
            continue;
        }
        // Stop if the current number is greater than the remaining target
        if (candidates[i] > target) {
            break;
        }
        combination.push_back(candidates[i]);
        findCombinations(candidates, i + 1, target - candidates[i], combination, result);
        combination.pop_back();
    }
}

// Main function to handle input/output and call the combination finding function
int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> pieces(N);
    for (int i = 0; i < N; ++i) {
        cin >> pieces[i];
    }

    sort(pieces.begin(), pieces.end()); // Sort to facilitate skipping duplicates
    
    vector<vector<int>> result;
    vector<int> combination;

    findCombinations(pieces, 0, K, combination, result);

    cout << result.size() << endl; // Output the number of unique combinations

    return 0;
}
