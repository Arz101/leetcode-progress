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
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        //if(l1.next == null && l2.next == null) return l1;
        string c1 = "", c2 = "";
        
        while(l1 != null){
            c1 += Convert.ToString(l1.val);
            l1 = l1.next;
        }
        while(l2 != null){
            c2 += Convert.ToString(l2.val);
            l2 = l2.next;
        }

        BigInteger num, num2;
        BigInteger.TryParse(c1, out num);
        BigInteger.TryParse(c2, out num2);
        string s = Convert.ToString(num+=num2);

        ListNode head = new ListNode(s[0] - '0');
        for(int i=1; i<s.Length; i++){
            AppEnd(head, s[i] - '0');
        }

        return head;
    }

    public void AppEnd(ListNode head, int n){
        ListNode aux = head;
        while(aux.next != null){
            aux = aux.next;
        }
        aux.next = new ListNode(n);
    }
}
