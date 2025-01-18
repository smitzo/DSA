# Define a class Node to represent a node in a linked list
class Node:
    def __init__(self, data, next=None):
        self.data = data      # Store data in the node
        self.next = next      # Pointer to the next node (None by default)

# Function to print the linked list
def printLL(head):
    temp = head
    if not head:
        print("List is empty.")
        return
    # Traverse the linked list and print each node's data
    while temp:
        print(f'{temp.data}->', end="")
        temp = temp.next
    print("NULL")  # Indicate the end of the list

# Function to insert a node at the head of the linked list
def insertAtHead(head, val): # 1->2->3->4       current head=1  
    # step1 Create a new node with the given value
    newnode = Node(val) # newnode ni value is 5 
    # step2 Make the new node's next pointer point to the current head  5->1->2->3->4
    newnode.next = head     #always step2
    # step3 Update head to point to the new node 5->1->2->3->4  new head will be 5 (HEAD always points to 1st node of LL)
    head=newnode    #always step3 

    return head

# Function to insert a node at the tail of the linked list
def insertAtTail(head, val): # 1->2->3->4 ->None       head=1 
    # If the list is empty, create a new node and return it as the new head
    if not head:     #head point to null which means there are 0 nodes in LL
        return Node(val)
    
    # Traverse to the end of the list (Dont use head for traversal, use temp for traversal)
    temp = head        #temp points to 1st node of the LL i.e
    while temp.next:    #while temp.next is not None i.e we have not reached end of ll
        temp = temp.next  #temp=2 , temp -3 temp=4 4->next=None means is 4 is last element 
    
    newnode=Node(val)
    # Append the new node at the end
    temp.next = newnode #4->next=5 #1->2->3->4->5
    return head  # Return the unchanged head

# Function to insert a node at the k-th position of the linked list
def insertAtKthPosition(head, val, k):  #1->2->3->4->5->6-> None  head=1  k=4  value=7
    if not head:
        if k == 1:
            return Node(val)
    elif k == 1:
        return Node(val, head)
    
    # Traverse to the (k-1)th position
    temp = head
    position = 1  # Start count at 1 for position tracking
    while temp and position < k - 1:   #traverse till k-1 th position i.e traverse till 3rd node. stop when temp points to 3rd node
        temp = temp.next
        position += 1
    
    if temp:  # If position is valid
        newnode = Node(val)       # new node=7
        newnode.next = temp.next  # 7->4  Always Point the newnode's next to the current k^th node. ALWAYS THIS IS 1ST STEP  [3->7 and 7->4 X wrong ]
        temp.next = newnode       # 3->7  Insert new node at the k-th position. ALWAYS STEP-2 if i do this as step I will lose my data
    return head                   #1->2->3->7->4->5->6

# Function to delete the head of the linked list
def deleteHead(head):
    if not head:
        return None  # If list is empty, return None
    temp = head
    head = head.next  # Move head to the next node
    del temp  # Free memory of the old head
    return head

# Function to delete the tail of the linked list
def deleteTail(head):
    if not head or not head.next:
        return None  # If the list has one or no elements, return None
    temp = head
    # Traverse to the second last node
    while temp.next.next:
        temp = temp.next
    del temp.next  # Delete the last node
    temp.next = None  # Set the second last node's next to None
    return head

# Function to delete the k-th element from the linked list
def deleteKthElement(head, k):
    if not head:
        return None
    if k == 1:  # Special case: delete the head
        temp = head
        head = head.next  # Move head to the next node
        del temp  # Free memory of the old head
        return head
    
    temp = head
    count = 1
    prev = None  # Track previous node
    
    # Traverse to the k-th node
    while temp and count < k:
        prev = temp
        temp = temp.next
        count += 1
    
    if temp:  # If k-th node is found
        prev.next = temp.next  # Skip the k-th node
        del temp  # Free memory of the k-th node
    return head

# Function to delete the first occurrence of a node with a specific value
def deleteElement(head, val):
    if not head:
        return None
    if head.data == val:  # Special case: delete the head
        temp = head
        head = head.next  # Move head to the next node
        del temp  # Free memory of the old head
        return head
    
    prev = None
    temp = head
    # Traverse to find the node with the specified value
    while temp and temp.data != val:
        prev = temp
        temp = temp.next
    
    if temp:  # If the value is found
        prev.next = temp.next  # Skip the node with the value
        del temp  # Free memory of the node
    return head

# Example usage:
arr = [10, 20, 30, 40, 50, 60, 70, 80]
head = Node(arr[0])  # Initialize the head node with the first value
mover = head  # Pointer to traverse and link nodes

# Create the linked list from the array
for i in range(1, len(arr)):
    temp = Node(arr[i])  # Create a new node with the current value
    mover.next = temp  # Link the current node to the new node
    mover = temp  # Move the mover pointer to the new node

print("Original list: ", end="")
printLL(head)

# Deleting the head
head = deleteHead(head)
print("List after deleting head: ", end="")
printLL(head)

# Deleting the tail
head = deleteTail(head)
print("List after deleting tail: ", end="")
printLL(head)

# Deleting the element at k-th position
k = 2
head = deleteKthElement(head, k)
print(f"List after deleting {k}th element: ", end="")
printLL(head)

# Deleting the element with data value
val = 60
head = deleteElement(head, val)
print(f"List after deleting element with data = {val}: ", end="")
printLL(head)

# Clean up remaining nodes
while head:
    temp = head
    head = head.next
    del temp  # Delete each node to free memory
