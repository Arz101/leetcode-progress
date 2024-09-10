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
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode aux = head;
        insertNum(aux, 1);
        return head;
    }

    private void insertNum(ListNode head,  int i){
        if(head == null) return;
        if(i % 2 != 0 && head.next != null){
            ListNode aux = head.next;
            head.next = new ListNode(mcd(head.val, aux.val));
            head.next.next = aux;
        }
        insertNum(head.next, i+1);
    }

    private int mcd(int a, int b){
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
