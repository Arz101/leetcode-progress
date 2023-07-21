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
    public ListNode MergeNodes(ListNode head) {
        ListNode A = head;
        ListNode B = new ListNode();
        ListNode ans = B;
        int sum = 0;

        while(A != null){
           
            if(A.val == 0){
                Console.WriteLine(sum);
                while(B.next != null){
                    B = B.next;
                }
                B.next = new ListNode(sum);
                sum = 0;
            }
            sum += A.val;
            A = A.next;
        }
        return ans.next.next;
    }
}
