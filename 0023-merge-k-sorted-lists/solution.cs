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
    List<int> r = new List<int>();
    public ListNode MergeKLists(ListNode[] lists) {
        ListNode l = new ListNode(0);
        ListNode ans = l;
        for(int i = 0; i < lists.Length; i++)
            Add(lists[i]);
        r.Sort();
        for(int i = 0; i < r.Count; i++){
            while(l.next != null)
                l = l.next;
            l.next = new ListNode(r[i]);
        }
        return ans.next;
    }

    public void Add(ListNode head){
        while(head != null){
            r.Add(head.val);
            head = head.next;
        }
    }

}
