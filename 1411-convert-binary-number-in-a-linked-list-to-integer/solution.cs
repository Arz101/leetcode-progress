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
        ListNode temp = null, prev = null;

        while(r != null){
            temp = r.next;
            r.next = prev;

            prev = r;
            r = temp;
        }
        return prev;
    }
    public int GetDecimalValue(ListNode head) {
        ListNode r = reverse(head);
        int ans = 0, i = 0;

        while(r != null){
            ans += r.val * (int)Math.Pow(2,i);
            i++;
            r = r.next;
        }
        
        /*(1 * 2^2) + (0 * 2^1) + (1 * 2^0) = 4 + 0 + 1 = 5
        for(int k = 0; k<nums.Count; k++){
            ans += nums[k] * (int)Math.Pow(2,k);
        }
        */
        return ans;
    }
}
