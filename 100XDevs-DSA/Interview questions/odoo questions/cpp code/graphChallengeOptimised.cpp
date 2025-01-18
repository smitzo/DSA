
/* Have the function GraphChallenge(strArr) take strArr which will be an array of strings which models a non-looping Graph.
The structure of the array will be as follows: The first element in the array will be the number of nodes N (points) in the array
as a string. The next N elements will be the nodes which can be anything (A, B, C .. Brick Street, Main Street .. etc.).
Then after the Nth element, the rest of the elements in the array will be the connections between all of the nodes. 
They will look like this: (A-B, B-C .. Brick Street-Main Street .. etc.). Although, there may exist no connections at all.
An example of strArr may be: ["4","A","B","C","D","A-B","B-D","B-C","C-D"]. Your program should return the shortest path from the 
first Node to the last Node in the array separated by dashes. So in the example above the output should be A-B-D. 
Here is another example with strArr being ["7","A","B","C","D","E","F","G","A-B","A-E","B-C","C-D","D-F","E-D","F-G"]. 
The output for this array should be A-E-D-F-G. There will only ever be one shortest path for the array. 
If no path between the first and last node exists, return -1. The array will at minimum have two nodes. 
Also, the connection A-B for example, means that A can get to B and B can get to A.*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include<unordered_set>
#include <queue>
#include <sstream>
using namespace std;

string GraphChallenge(vector<string> strArr) {
    int n = stoi(strArr[0]);  // Find number of nodes
    vector<string> nodes(strArr.begin() + 1, strArr.begin() + 1 + n);
    unordered_map<string, vector<string>> graph;

    // Build the graph from the connections
    for (int i = n + 1; i < strArr.size(); i++) {
        string connection = strArr[i];
        int dashPos = connection.find('-');
        string node1 = connection.substr(0, dashPos);
        string node2 = connection.substr(dashPos + 1);
        
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    string start = nodes[0];
    string end = nodes[n - 1];

    // BFS to find the shortest path
    queue<vector<string>> q;
    unordered_set<string> visited;  // Use unordered_set for faster lookups
    q.push({start});
    visited.insert(start);

    while (!q.empty()) {
        vector<string> path = q.front();
        q.pop();
        string lastNode = path.back();

        if (lastNode == end) {
            // Found the shortest path
            string result;
            for (int i = 0; i < path.size(); i++) {
                if (i > 0) result += "-";
                result += path[i];
            }
            return result;
        }

        // Explore the neighbors
        for (const string& neighbor : graph[lastNode]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                vector<string> newPath(path);  // Avoid copying all path repeatedly
                newPath.push_back(neighbor);
                q.push(move(newPath));  // Use move to optimize memory
            }
        }
    }

    return "-1";  // No path found
}


int main() {
    std::vector<std::string> strArr1 = {"4","A","B","C","D","A-B","B-D","B-C","C-D"};
    std::vector<std::string> strArr2 = {"7","A","B","C","D","E","F","G","A-B","A-E","B-C","C-D","D-F","E-D","F-G"};
    std::vector<std::string> strArr3 = {"5","A","B","C","D","E","A-B","B-C","C-D"};

    std::cout << GraphChallenge(strArr1) << std::endl; // Output: A-B-D
    std::cout << GraphChallenge(strArr2) << std::endl; // Output: A-E-D-F-G
    std::cout << GraphChallenge(strArr3) << std::endl; // Output: -1

    return 0;
}
