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
  public ListNode MergeTwoLists(ListNode l1, ListNode l2) {
    ListNode aux = new ListNode(-1);
    ListNode current = aux;

    while(l1 != null && l2 != null){
      if(l1.val <= l2.val){
        current.next = l1;
        l1 = l1.next;
      }else{
        current.next = l2;
        l2 = l2.next;
      }
      current = current.next;
    }      
    if(l1 == null){
      Add(l2, current);
    }else Add(l1, current);

    return aux.next;
  }

  public void Add(ListNode list, ListNode head){
    while(list != null){
      head.next = list;
      list = list.next;
      head = head.next;
    }
  }
}
