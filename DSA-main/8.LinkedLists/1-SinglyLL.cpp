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

Node* convertArrToLL(vector<int>&arr){

    Node*head=new Node (arr[0]);
    Node*mover=head;

    for (int i=0;i<arr.size();i++){
        
        Node*temp=new Node (arr[i]);
        mover->next=temp;
        mover=mover->next; // or mover = temp 

    }
    return head;
}

int lengthOfLL(Node* head){
    int count=0;
    Node*temp= head;    //temp is a ptr
    while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    return count;
}

bool elementIsPresent(Node* head,int target){
    Node*temp=head;
    while (temp!=nullptr){
        
        if (temp->data==target) return 1;
        temp=temp->next;
    }
    return 0;
}


int main(){
    
    vector<int> arr1 = {100, 200, 300, 400, 500};
    int target=900;

   
    // // GOOD PRACTICE
    // Node* n1 = new Node(arr[0], nullptr);  // Create a new node on the heap.n1 is a pointer to a Node object, not the object itself
    // cout << n1; // 0x10b19b0 (memory address of node n1)
    // cout << n1->data; // we use -> operator since n1 is a pointer
    // cout<<n1->next;
     
    // // Node n2(arr[1], nullptr); // Creates a new node on the stack
    // // cout << n2.data;  // we use . operator to acces data since n2 is an object
    // // cout << n2.next;

    Node*head = convertArrToLL(arr1);
    cout<<"head->data is "<< head->data <<endl;

    //traversal
    cout<<"LL traversal:";
    Node*temp= head;    //temp is a ptr
    while(temp!=nullptr){
        cout<<temp->data;
        temp=temp->next;
        cout<< "->";
    }

    cout<<"length of LL is :"<<lengthOfLL(head) << endl;

    cout<<"target is present :"<<elementIsPresent(head, target);

    
}