/*• PROGRAM 6 The first line of input contains positive integers N and K separated by a space.
• The next lines contain N numbers of positive integers, A[], which denotes the room number available to be used.
To solve the problem of finding the largest minimum distance that can be maintained between rooms given N rooms and K students,
The problem is essentially about placing K students in N rooms in such a way that the minimum distance between any two students is maximized.
OUTPUT:
• Print the largest minimum distance that can be maintained between the rooms.
• CONSTRAINTS
• 2 <= N <= 10^5
• 2 <= K <= N
• 1 <=A[i] <= 10^9
•
Example Input
• 5 3
• 1 2 4 8 9
•
Example Output
• 3*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if we can place all students with at least 'distance' between them
bool canPlaceStudents(const vector<int>& rooms, int K, int distance) {
    int count = 1; // Place the first student in the first room
    int lastPlaced = rooms[0];
    
    for (int i = 1; i < rooms.size(); ++i) {
        if (rooms[i] - lastPlaced >= distance) {
            count++;
            lastPlaced = rooms[i];
            if (count >= K) return true; // Successfully placed all students
        }
    }
    return false;
}

// Function to find the largest minimum distance using binary search
int findLargestMinDistance(vector<int>& rooms, int K) {
    sort(rooms.begin(), rooms.end());
    
    int low = 1; // Minimum possible distance
    int high = rooms.back() - rooms.front(); // Maximum possible distance
    int bestDistance = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canPlaceStudents(rooms, K, mid)) {
            bestDistance = mid; // mid is a feasible distance, try for a larger distance
            low = mid + 1;
        } else {
            high = mid - 1; // mid is not feasible, try for a smaller distance
        }
    }
    
    return bestDistance;
}

// Function to read input and process the problem
void processProblem() {
    int N, K;
    cin >> N >> K;
    
    vector<int> rooms(N);
    for (int i = 0; i < N; ++i) {
        cin >> rooms[i];
    }
    
    cout << findLargestMinDistance(rooms, K) << endl;
}

int main() {
    processProblem();
    return 0;
}
