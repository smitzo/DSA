class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: ListNode) -> ListNode: #1-2-3-4-5     2-1-none
        # 2 pointers prev and current
        prev = None    # Initialize previous node as None (no node before head)  
        current = head   # Start with the head node as the current node
        
        # Loop until we reach the end of the list
        while current: 
            
            next_node = current.next   # STEP1 Save the next node before breaking the link
            current.next = prev  # STEP2 Reverse the current node's pointer to point to the previous node
            
            prev = current  # STEP3 Move the previous pointer to the current node
            current = next_node  # STEP4 Move the current pointer forward to the next node
        
        return prev # After the loop, prev will be the new head of the reversed list

        iteration-1
        nextnode=2
        1.next=prev=None
        prev=1
        current=2

        nextnode=3
        2.next=prev
        prev=2
        current=3

        nextnode=4
        3.next=prev
        prev=3
        current=4

        nextnode=5
        4.next=prev
        prev=4
        current=5
        nextnode
        
