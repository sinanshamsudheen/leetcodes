# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def cycle(self,head):
        slow,fast=head,head
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            if slow==fast:
                return slow
        return None
        

    def detectCycle(self, head):
        detect=self.cycle(head)
        if detect is None:
            return None
        slow=head
        while slow!=detect:
            slow=slow.next
            detect=detect.next
        return detect

        