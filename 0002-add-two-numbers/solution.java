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
import java.math.BigInteger;
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        String val1 = "", val2 = "";

        while(l1 != null || l2 != null){
            if(l1 != null) {
                val1 += String.valueOf(l1.val);
                l1 = l1.next;
            }
            if(l2 != null){
                val2 += String.valueOf(l2.val);
                l2 = l2.next;
            }
        }
        BigInteger t1 = new BigInteger(val1);
        BigInteger t2 = new BigInteger(val2);
        BigInteger total = t1.add(t2);
        String totalString = String.valueOf(total);

        ListNode ptr = null;
        for(int i = 0; i < totalString.length(); i++){
            if(ptr == null){
                ptr = new ListNode(Character.getNumericValue(totalString.charAt(i)));
            }
            else{
                ListNode ptr2 = ptr;
                while(ptr2.next != null){
                    ptr2 = ptr2.next;
                }
                ptr2.next = new ListNode(Character.getNumericValue(totalString.charAt(i)));
            }
        }
        return reverse(ptr);
    }
    
    public ListNode reverse(ListNode head){
        ListNode new_list = null;
        ListNode ptr = head;

        while(ptr != null){
            ListNode next_nodo = ptr.next;
            ptr.next = new_list;
            new_list = ptr;
            ptr = next_nodo;
        }

        return new_list;
    }
}
