# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def __init__(self):
        self.recList = ListNode()
        self.aux = self.recList
    def recursive(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head
        
        self.recursive(head.next)

        self.aux.next = ListNode(head.val)
        self.aux = self.aux.next
        
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        self.recursive(head)
        return self.recList.next
