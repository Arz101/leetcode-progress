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
    public ListNode modifiedList(int[] nums, ListNode head) {
        ListNode ans = new ListNode(0), temp = ans;
        ans.next = head;

        Set<Integer> n = new HashSet<>();
        
        for(int i = 0; i < nums.length; i++){
            n.add(nums[i]);
        }
        while(temp != null && temp.next != null){
            if(n.contains(temp.next.val)){
                temp.next = temp.next.next;
            }else temp = temp.next;
        }

        
       return ans.next;
    }
}
