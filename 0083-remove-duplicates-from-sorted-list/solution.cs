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
    public ListNode DeleteDuplicates(ListNode head) {
        if(head == null) return null;

        ListNode p1 = head;

        while(p1.next != null){
            if(p1.val == p1.next.val){
                p1.next = p1.next.next;
            }
            else p1 = p1.next;
        }
        
        return head;
    }
}
