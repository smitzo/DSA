#include<iostream>
#include<vector>  // Include the necessary header for using vectors

using namespace std;

void explainVectors() {
    // 1. Initialize a vector `v0` of size 5, all elements are initialized to 100
    vector<int> v0(5, 100);  // This creates a vector with 5 elements, all set to 100
    cout << "v0: ";
    for(int i = 0; i < v0.size(); i++) {
        cout << v0[i] << " ";  // Print elements of `v0`
    }
    cout << endl;

    // 2. Initialize a vector `v1` of size 5 (default-initialized to 0)
    vector<int> v1(5);  // Vector of size 5, default-initialized (all elements are 0)
    v1.push_back(1);         // Add element '1' at the end of the vector
    v1.emplace_back(2);      // Add element '2' at the end of the vector (more efficient than push_back)
    v1.push_back(3);         // Add element '3' at the end of the vector
    v1.emplace_back(4);      // Add element '4' at the end of the vector
    v1.push_back(5);         // Add element '5' at the end of the vector
    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  // Print elements of `v1`
    }
    cout << endl;

    // 3. Copy the vector `v1` into another vector `v2`
    vector<int> v2(v1);  // Creates a new vector `v2` as a copy of `v1`
    cout << "v2: ";
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";  // Print elements of `v2`
    }
    cout << endl;

    // 4. Declare a vector of pairs `v3` and add pairs using push_back and emplace_back
    vector<pair<int,int>> v3;  // Vector of pairs (int, int)
    v3.push_back({1, 2});    // Add pair {1,2} to the vector using push_back
    v3.emplace_back(3, 4);   // Add pair {3,4} to the vector using emplace_back (slightly more efficient)
    cout << "v3: ";
    for(auto &p : v3) {
        cout << "{" << p.first << "," << p.second << "} ";  // Print each pair in `v3`
    }
    cout << endl;

    // 5. Iterators: Used to traverse vectors
    vector<int>::iterator it = v1.begin();  // Iterator pointing to the first element of `v1`
    cout << "First element using iterator: " << *it << endl;  // Dereference iterator to get the value

    it++;  // Move iterator to the next element
    cout << "Second element using iterator: " << *it << endl;

    it = v1.end();  // Point iterator to the end (past the last element)
    it--;  // Move back to the last element
    cout << "Last element using iterator: " << *it << endl;

    // 6. Iterate over `v1` using traditional iterator syntax
    cout << "Iterating over v1 using traditional iterator syntax: ";
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";  // Dereference iterator to print each element
    }
    cout << endl;

    // 7. Iterate over `v1` using the auto keyword with iterators
    cout << "Iterating over v1 using auto keyword: ";
    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";  // `auto` automatically deduces the type of iterator
    }
    cout << endl;

    // 8. Iterate over `v1` using a for-each loop (range-based for loop)
    cout << "Iterating over v1 using a for-each loop: ";
    for (auto it : v1) {  // Directly access each element in `v1`
        cout << it << " ";  // No need for an explicit iterator
    }
    cout << endl;

    // 9. Reverse Iterators: Used to traverse the vector in reverse order
    vector<int>::reverse_iterator rit = v1.rbegin();  // Reverse iterator pointing to the last element
    cout << "First element in reverse using reverse iterator: " << *rit << endl;

    rit++;  // Move reverse iterator to the next element in reverse order
    cout << "Second element in reverse using reverse iterator: " << *rit << endl;

    // 10. Vector size and capacity
    cout << "Size of v1: " << v1.size() << endl;  // Size of the vector (number of elements)
    cout << "Capacity of v1: " << v1.capacity() << endl;  // Capacity of the vector (memory allocated)

    // 11. Accessing elements using 'at' method
    cout << "Element at index 2 in v1: " << v1.at(2) << endl;  // Access element at index 2 safely

    // 12. Removing last element with pop_back
    v1.pop_back();  // Remove the last element from `v1`
    cout << "v1 after pop_back: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  // Print the vector after pop_back
    }
    cout << endl;

    // 13. erase operation: Remove elements from any position in the vector
    v1.erase(v1.begin(), v1.begin()+5);  // Erase the first 5 elements
    cout << "v1 after erasing first 5 elements: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  // Print the vector after erasing elements
    }
    cout << endl;

    // 14. insert operation: Inserting elements into the vector
    v1.insert(v1.begin(), 69);  // Insert 69 at the beginning of the vector
    cout << "v1 after inserting 69 at the beginning: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  // Print the vector after insertion
    }
    cout << endl;

    v1.insert(v1.begin()+2, 3, 59);  // Insert 59 three times at index 2
    cout << "v1 after inserting 59 three times at index 2: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  // Print the vector after multiple insertions
    }
    cout << endl;

    // 15. Insert elements from another vector
    vector<int> v4(2, 100);  // Create a vector `v2` with two elements, both 100
    v1.insert(v1.begin(), v4.begin(), v4.end());  // Insert all elements from `v2` at the beginning of `v1`

    // 16. Swap: Swapping contents of two vectors
    v1.swap(v4);  // Swap contents of `v1` and `v2`
    cout << "v1 after swapping with v4: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";  // Print `v1` after swapping
    }
    cout << endl;

    // 17. Clearing a vector
    v1.clear();  // Remove all elements from `v1`
    cout << "Size of v1 after clear: " << v1.size() << endl;  // Print the size of `v1` after clearing
}

int main() {
    explainVectors();  // Call the function to explain vectors
    return 0;
}
