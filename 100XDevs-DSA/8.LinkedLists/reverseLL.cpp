#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }

    Node(int data, Node* next){
        this->data=data;
        this->next=next;
    }
};


void printLL (Node* head){

    Node* temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

void reverseLL(Node* head){
    Node* temp = head;
    while (temp!=nullptr){

        Node* prevnode=temp;
        Node* nextnode=temp->next;
        temp=temp->next;

        temp->next=prevnode;
    }
    
}
int main(){
    
    vector<int>arr={10,20,30,40,50};
    Node* head = new Node(arr[0]); // Initialize the head node
    Node* mover = head; // Pointer to traverse and link nodes

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create a new node with the current value
        mover->next = temp; // Link the current node to the new node
        mover = temp; // or mover=mover->next  // Move the mover pointer to the new node
    }

    printLL(head);
    
}