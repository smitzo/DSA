#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *tail;
    Node *head; /*head must always points at the first node . if we insert more nodes at the 1st position (insert at head) , we will have to update
                 the value of head , because now a new other node is at the 1st position . intially nodes are: 4,5,6,7 -> head=4
                                     now we insert some nodes at beginning position , finally the nodes are: 2,3,4,5,6,7 -> head=2    */
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(int data, Node *&head)
{                                // pass reference of head because i dont want to create a new copy , i want changes in the original LL
    Node *temp = new Node(data); // create a temp node. the constructor of node makes "next ptr" of temp point to null intially (see line 16 )
    temp->next = head;           // now we make the "next ptr "of temp point to the head of th LL
    head = temp;                 // now the first node of the LL is our  temp node , so we point the head to our temp node.
}

void InsertAtTail(int data, Node *&tail)
{

    Node *temp = new Node(data);
    tail->next = temp; // now we make the "next ptr "of tail point to the temp .
    tail = temp;       // now last node of the LL is temp node , so we point the tail to our temp node . here we can also write tail = tail -> next
}
void InsertAtPosition(Node *&head, Node *&tail, int data, int position)
{

    // insert at head i.e first position
    if (position == 1)
    {
        InsertAtHead(data, head);
    }
    // insert at tail i.e last position
    if (temp->next == NULL){
        InsertAtTail()
    }
    int count = 1;
    Node *temp = head;
    Node *NodeToInsert = new Node(data);

    while (count < position - 1)
    {

        count++;
    }
}

void printLL(Node *&head)
{                      // we use reference of head to know where 1st node i.e the starting node for starting the traversal
    Node *temp = head; // while traversing we should not change the head because while traversing , we arent inserting or deleting nodes
                       // we use a temp ptr which updates and points to the next node after each iteration. to point temp towards 1st node, we write  *temp=head
    while (temp->next != NULL)
    {
        cout << temp->data << "";
        temp = temp->next; // similar to i++ , we update the value of temp ptr after each iterationx
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    printLL(head);
    InsertAtHead(20, head);
    printLL(head);
    return 0;
}
