/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    public void reorderList(ListNode head) {

        if (head == null || head.next == null)
            return;

        ListNode curr = head;
         while (curr != null && curr.next != null) {
            ListNode prev = null;
            ListNode last = curr;

            while (last.next != null) {
                prev = last;
                last = last.next;
            }
            if (curr == last || curr.next == last)
                break;
            prev.next = null;
            last.next = curr.next;
            curr.next = last;
            curr = last.next;
        }
    }
}