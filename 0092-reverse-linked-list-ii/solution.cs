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
    public ListNode ReverseBetween(ListNode head, int left, int right) {

        List<int> ls = new List<int>();

        while(head != null){
            ls.Add(head.val);
            head = head.next;
        }
        while(left < right){
            int r = ls[left - 1];
            ls[left - 1] = ls[right - 1];
            ls[right - 1] = r;
            left++;
            right--;
        }
        ListNode aux = new ListNode(0);
        ListNode ans = aux;
        for(int i=0; i<ls.Count; i++){
            while(aux.next != null){
                aux = aux.next;
            }
            aux.next = new ListNode(ls[i]);
        }

        return ans.next;
    }
}
