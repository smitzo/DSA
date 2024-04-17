#include <iostream>
using namespace std;

class Node{

public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void PrintLL(Node* &head){
    Node* temp = head;

    while (temp->next !=NULL)
    {
        cout << temp->data;
        cout<<endl;
        temp = temp->next;
    }

}
void InsertAtHead(int data, Node* &head){


}
void InsertAtTail(int data, Node* &tail){

}
void InsertAtPosition(int data, Node*&head,Node* &tail){

}
int main ()
{
    Node
}