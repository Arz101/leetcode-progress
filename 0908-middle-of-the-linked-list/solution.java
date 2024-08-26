/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        if(head.next == null) return head;
        ListNode ptr = head, pr2 = head.next.next;
        
        while(pr2 != null && pr2.next!=null){
            pr2 = pr2.next.next;
            ptr = ptr.next;
        }

        return ptr.next;
    }
}
