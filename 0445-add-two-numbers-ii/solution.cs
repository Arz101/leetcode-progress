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
    public ListNode ReverseList(ListNode c){
        ListNode i = null, temp = null;

        while(c != null){
            temp = c.next;
            c.next = i;
            i = c;
            c =temp;
        }
        return i;
    }

    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode i = ReverseList(l1);
        ListNode j = ReverseList(l2);
        ListNode ans = new ListNode();
        int carry = 0, sum = 0;
        while(i != null || j != null){
            if(i != null){
                sum += i.val;
                i = i.next;
            }
            if(j != null){
                sum += j.val;
                j = j.next;
            }
            ans.val = sum % 10;
            carry = sum / 10;
            ListNode head = new ListNode(carry);
            head.next = ans;
            ans = head;
            sum = carry;
        }
        return carry == 0? ans.next : ans;
    }
}
