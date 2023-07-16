/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode DeleteMiddle(ListNode head) {
        if(head.next == null) return null;
        ListNode fast=head.next.next, sw = head;

        while(fast != null && fast.next != null){
            fast = fast.next.next;
            sw = sw.next;
        }
        sw.next = sw.next.next;
        return head;
    }
}
