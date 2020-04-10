/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
  int sizeOfLinkedList = 1;
  public ListNode middleNode(ListNode head) {
    ListNode cur = head;
    while (cur.next != null) {
      sizeOfLinkedList++;
      cur = cur.next;
    }
    
    if (sizeOfLinkedList == 1) return cur;
    
    int middleNodeIndex = (sizeOfLinkedList/2) + 1;

    ListNode cur1 = head;
    int curNodeIndex = 1;
    while (curNodeIndex != middleNodeIndex) {
      curNodeIndex++;
      cur1 = cur1.next;
    }
    return cur1;
  }
}