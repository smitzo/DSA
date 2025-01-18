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

    // Traverse the linked list and print each node's data
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Indicate the end of the list
}

// Function to insert a node at the head of the linked list
Node* insertAtHead(Node* head, int val) {
    // Create a new node with the given value
    Node* newnode = new Node(val);
    // Make the new node's next pointer point to the current head
    newnode->next = head;
    // Update head to point to the new node
    head = newnode;

    return head; // Return the updated head
}

// Function to insert a node at the tail of the linked list
Node* insertAtTail(Node* head, int val) {
    // If the list is empty, create a new node and return it as the new head
    if (head == nullptr) {
        return new Node(val);
    }

    // Create a new node with the given value
    Node* newnode = new Node(val);
    Node* temp = head;

    // Traverse to the end of the list
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    // Append the new node at the end
    temp->next = newnode;

    return head; // Return the unchanged head
}

// Function to insert a node at the k-th position of the linked list
Node* insertAtKthPosition(Node* head, int val, int k) {
    // Special case: Insert at the head if the list is empty or k is 0
    if (head == nullptr) {
        if (k == 1) {
            Node* newnode = new Node(val);
            head = newnode;
        }
    } else if (k == 1) {
        Node* newhead = new Node(val, head); // Create new head node
        return newhead; // Return the new head
    } else {
        int count = 0;
        Node* temp = head;

        // Traverse to the (k-1)th position
        while (temp != nullptr) {
            count++;
            if (count == k - 1) {
                // Insert the new node after the (k-1)th node
                Node* newnode = new Node(val);
                newnode->next = temp->next;
                temp->next = newnode;
                break;
            }
            temp = temp->next;
        }
    }

    return head; // Return the unchanged head
}

// Function to insert a node before a node with a specific value
Node* insertBeforeValue(Node* head, int val, int data) {

    bool found=false;
    // If the list is empty, return nullptr
    if (head == nullptr) {
        return nullptr;
    }

    // Special case: Insert before the first node if it contains the value
    if (head->data == val) {
        Node* newnode = new Node(data,head); // costructore Node(data,next) is used so newnode->next = head;
        return newnode; // Return the new node as the new head
    }

    Node* temp = head;

    // Traverse the list to find the node before the one with the given value
    while (temp != nullptr) {
        if (temp->next != nullptr && temp->next->data == val) {
            found=true;
            // Insert the new node before the node with the given value
            Node* newnode = new Node(data);
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }

    if (found){
        return head; // Return the unchanged head
    }
    else cout<<"value not found try again"
    
}

// Function to insert a node after a node with a specific value
Node* insertAfterValue(Node* head, int val, int data) {
    bool found=false;
    Node* temp = head; // Temporary pointer for traversal

    // Traverse the list to find the node with the given value
    while (temp != nullptr) {
        if (temp->data == val) {
            found=true;
            // Create a new node and insert it after the node with the given value
            Node* newnode = new Node(data);
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    if (found){
        return head; // Return the unchanged head
    }
    else cout<<"value not found";
    
}

int main() {
    // Initialize a linked list with values from the array
    vector<int> arr = {10, 20, 30, 40, 50};
    Node* head = new Node(arr[0]);
    Node* mover = head;

    // Create the linked list from the array
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create a new node with the current value
        mover->next = temp; // Link the current node to the new node
        mover = temp; // Move the mover pointer to the new node
    }

    // Print the initial linked list
    printLL(head);

    // Insert a node at the head
    cout << "After Insert at head operation:";
    head = insertAtHead(head, 34);
    printLL(head);

    // Insert a node at the tail
    cout << "After Insert at tail operation:";
    head = insertAtTail(head, 69);
    printLL(head);

    // Insert a node at the k-th position
    int k = 1;
    cout << "After Insert at Kth position operation:";
    head = insertAtKthPosition(head, 90, k);
    printLL(head);

    // Insert a node before a node with a specific value
    int val = 30;
    int data = 75;
    cout << "After Insert before value val operation:";
    head = insertBeforeValue(head, val, data);
    printLL(head);

    // Insert a node after a node with a specific value
    val = 50;
    data = 39;
    cout << "After Insert after value val operation:";
    head = insertAfterValue(head, val, data);
    printLL(head);

    // Clean up the linked list to avoid memory leaks
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp; // Delete each node to free memory
    }

    return 0;
}
