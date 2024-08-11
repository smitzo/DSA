#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{ // Define a class Node to represent a node in a linked list
    public: 

    int data;
    Node *next;  // Pointer to the next node in the linked list
        
    Node (int data){   // Constructor2 to initialize the node with data  and next with nullptr
        
        this->data = data;
        this->next = nullptr; 
    }

    Node (int data, Node* next1){   // Constructor2 to initialize the node with data and next pointer
        
        this->data = data;
        this->next = next1; 
    }

};
int main(){
    
    vector<int> arr = {100, 200, 300, 400, 500};

    while (node->next!=nullptr){

    }

    
   
    // GOOD PRACTICE
    Node* n1 = new Node(arr[0], nullptr);  // Create a new node on the heap.n1 is a pointer to a Node object, not the object itself
    cout << n1; // 0x10b19b0 (memory address of node n1)
    cout << n1->data; // we use -> operator since n1 is a pointer
    cout<<n1->next;
     


    return 0;
}