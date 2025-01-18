#include <iostream>
#include <vector>

using namespace std;

// Explanation for why `head` in a linked list is necessary
/*Head is the entry point of a linked list. 
It is necessary because:
1. **Access**: The head node is the starting point for accessing all other nodes in the list.
2. **Modification**: When performing operations like adding or removing nodes, the head pointer might change, and returning the updated head ensures that the caller has the correct reference to the list.
3. **Consistency**: Returning the head pointer maintains consistency and allows for flexible modifications to the list.
*/

class Node {
public:
    int data;
    Node* next;

    // Constructor to create a node with data and no next pointer
    Node(int data) : data(data), next(nullptr) {}
    
    // Constructor to create a node with data and a next pointer
    Node(int data, Node* next) : data(data), next(next) {}
};

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to delete the head of the linked list
Node* deleteHead(Node* head) {
    if (head == nullptr) return nullptr; // If the list is empty, return nullptr

    Node* temp = head;   // Temporarily store the old head
    head = head->next;   // Move the head to the next node
    delete temp;          // Delete the old head node to free memory
    
    return head;         // Return the new head of the list
}

// Function to delete the tail of the linked list
Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head; // If there's only one node, delete it and return nullptr
        return nullptr;
    }

    Node* temp = head;
    // Traverse to the second-last node
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next; // Delete the last node
    temp->next = nullptr; // Update the second-last node's next to nullptr

    return head; // Return the unchanged head
}

// Function to delete the k-th element from the linked list
Node* deleteKthElement(Node* head, int k) {
    if (head == nullptr) return nullptr; // If the list is empty, return nullptr

    if (k == 1) { // Special case: deleting the head
        Node* temp = head;
        head = head->next; // Move the head to the next node
        delete temp; // Delete the old head node
        return head; // Return the new head
    }

    Node* prev = nullptr; // Pointer to keep track of the previous node
    Node* temp = head;
    int cnt = 0;

    // Traverse the list to find the k-th node
    while (temp != nullptr) {
        cnt++;
        if (cnt == k) {
            if (prev != nullptr) {
                prev->next = temp->next; // Skip the k-th node
            }
            delete temp; // Delete the k-th node
            return head; // Return the head (unchanged unless k = 1)
        }
        prev = temp; // Move prev to current node
        temp = temp->next; // Move temp to the next node
    }
    
    return head; // Return the head if k is out of range
}

// Function to delete the first occurrence of a node with a specific value
Node* deleteElement(Node* head, int val) {
    if (head == nullptr) return nullptr; // If the list is empty, return nullptr

    if (val == head->data) { // Special case: deleting the head
        Node* temp = head;
        head = head->next; // Move the head to the next node
        delete temp; // Delete the old head node
        return head; // Return the new head
    }

    Node* prev = nullptr; // Pointer to keep track of the previous node
    Node* temp = head;

    // Traverse the list to find the node with the specified value
    while (temp != nullptr) {
        if (temp->data == val) {
            if (prev != nullptr) {
                prev->next = temp->next; // Skip the node with the specified value
            }
            delete temp; // Delete the node with the specified value
            return head; // Return the head (unchanged unless the value was found at the head)
        }
        prev = temp; // Move prev to current node
        temp = temp->next; // Move temp to the next node
    }
    
    return head; // Return the head if the value is not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    Node* head = new Node(arr[0]); // Initialize the head node with the first value
    Node* mover = head; // Pointer to traverse and link nodes

    // Create the linked list from the array
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create a new node with the current value
        mover->next = temp; // Link the current node to the new node
        mover = temp; // Move the mover pointer to the new node
    }

    cout << "Original list: ";
    printLL(head);

    // Deleting the head
    head = deleteHead(head);
    cout << "List after deleting head: ";
    printLL(head);

    // Deleting the tail
    head = deleteTail(head);
    cout << "List after deleting tail: ";
    printLL(head);

    // Deleting the element at k-th position
    int k = 2;
    head = deleteKthElement(head, k);
    cout << "List after deleting " << k << "th element: ";
    printLL(head);

    // Deleting the element with data value
    int val = 60;
    head = deleteElement(head, val);
    cout << "List after deleting element with data = " << val << ": ";
    printLL(head);

    // Clean up remaining nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp; // Delete each node to free memory
    }

    return 0;
}
