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
    public int PairSum(ListNode head) {
        
       ListNode current = head;
       List<int> values = new List<int>();

       while(current != null){
           values.Add(current.val);
           current = current.next;
        } 
        int i = 0, j = values.Count - 1;
        int max = 0;
        
        while(i < j){
            max = Math.Max(max, values[i] + values[j]);
            i++;
            j--;
        }
        return max;

    }
}  
