//import java.util.LinkedList;

class Node {
    int data;
    Node next;

    // Constructor to create a node with data and no next pointer
    Node(int data) {
        this.data = data;
        this.next = null;
    }
    
    // Constructor to create a node with data and a next pointer
    Node(int data, Node next) {
        this.data = data;
        this.next = next;
    }
}

public class deleteElementInSinglyLL {

    // Function to print the linked list
    public static void printLL(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println();
    }

    // Function to delete the head of the linked list
    public static Node deleteHead(Node head) {
        if (head == null) return null; // If the list is empty, return null

        Node temp = head;  // Temporarily store the old head
        head = head.next;  // Move the head to the next node
        temp = null;       // Remove reference to old head for garbage collection
        
        return head; // Return the new head of the list
    }

    // Function to delete the tail of the linked list
    public static Node deleteTail(Node head) {
        if (head == null || head.next == null) {
            head = null; // If there's only one node, delete it and return null
            return head;
        }

        Node temp = head;
        // Traverse to the second-last node
        while (temp.next.next != null) {
            temp = temp.next;
        }

        temp.next = null; // Remove the reference to the last node
        return head; // Return the unchanged head
    }

    // Function to delete the k-th element from the linked list
    public static Node deleteKthElement(Node head, int k) {
        if (head == null) return null; // If the list is empty, return null

        if (k == 1) { // Special case: deleting the head
            Node temp = head;
            head = head.next; // Move the head to the next node
            temp = null; // Remove reference to old head for garbage collection
            return head; // Return the new head
        }

        Node prev = null; // Pointer to keep track of the previous node
        Node temp = head;
        int cnt = 0;

        // Traverse the list to find the k-th node
        while (temp != null) {
            cnt++;
            if (cnt == k) {
                if (prev != null) {
                    prev.next = temp.next; // Skip the k-th node
                }
                temp = null; // Remove reference to the k-th node for garbage collection
                return head; // Return the head (unchanged unless k = 1)
            }
            prev = temp; // Move prev to current node
            temp = temp.next; // Move temp to the next node
        }
        
        return head; // Return the head if k is out of range
    }

    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80};
        Node head = new Node(arr[0]); // Initialize the head node with the first value
        Node mover = head; // Pointer to traverse and link nodes

        // Create the linked list from the array
        for (int i = 1; i < arr.length; i++) {
            Node temp = new Node(arr[i]); // Create a new node with the current value
            mover.next = temp; // Link the current node to the new node
            mover = temp; // Move the mover pointer to the new node
        }

        System.out.print("Original list: ");
        printLL(head);

        // Deleting the head
        head = deleteHead(head);
        System.out.print("List after deleting head: ");
        printLL(head);

        // Deleting the tail
        head = deleteTail(head);
        System.out.print("List after deleting tail: ");
        printLL(head);

        // Deleting the k-th element
        int k = 2;
        head = deleteKthElement(head, k);
        System.out.print("List after deleting " + k + "th element: ");
        printLL(head);

        // Clean up remaining nodes (automatic in Java due to garbage collection)
    }
}
