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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next == null) return null;
        ListNode ptr = head;
        ListNode ptr2 = head;

        int i=1;
        while(i<=n){
            ptr2 = ptr2.next;
            i++;
        }
        if(ptr2==null)return ptr.next;
        while(ptr2 != null){
            if(ptr2.next == null){
                ptr.next = ptr.next.next;
            }
            ptr = ptr.next;
            ptr2 = ptr2.next;
        }
        return head;
    }
}
