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
    public ListNode RotateRight(ListNode head, int k) {
        List<int> list = new List<int>();
        ListNode r = new ListNode(0);
        while(head != null){
            list.Add(head.val);
            head = head.next;
        }
        List<int> listpy = list.ToList();
        ListNode ans = r;
        for(int i=0; i < list.Count; i++){
            list[(i+k)%list.Count] = listpy[i];
        }
        foreach(var s in list){
            while(r.next != null) r = r.next;
            r.next = new ListNode(s);
        }
        
        return ans.next;
    }
}
