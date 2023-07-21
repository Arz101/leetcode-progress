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
    public ListNode reverse(ListNode r){
        ListNode i = null, temp = null;

        while(r != null){
            temp = r.next;
            r.next = i;

            i = r;
            r = temp;
        }
        return i;
    }

    public bool IsPalindrome(ListNode head) {
        if(head.next == null) return true;
        ListNode s = head, f = head.next.next;
        
        while(f != null && f.next != null){
            s = s.next;
            f = f.next.next;
        }
        ListNode list = reverse(s.next);
        while(list != null && head != null){
            if(list.val != head.val) return false;

            list = list != null? list.next : null;
            head = head != null? head.next : null;
        }
        return true;
    }
}
