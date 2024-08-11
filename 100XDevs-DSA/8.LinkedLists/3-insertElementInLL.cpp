#include <iostream>
#include <vector> // Include the vector header

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with data and no next pointer
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    // Constructor to initialize a node with data and a next pointer
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;

    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Indicate the end of the list
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    Node* head = new Node(arr[0]);
    Node* mover = head;

    // Create the linked list from the array
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create a new node with the current value
        mover->next = temp; // Link the current node to the new node
        mover = temp; // Move the mover pointer to the new node
    }

    // Print the linked list
    printLL(head);

    // Clean up the linked list to avoid memory leaks
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp; // Delete each node to free memory
    }

    return 0;
}
