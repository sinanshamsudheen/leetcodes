# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseKNodes(self,head,k):
        curr=head
        prev=None
        count=0

        while curr and count<k:
            NextNode=curr.next
            curr.next=prev
            prev=curr
            curr=NextNode
            count+=1
        return prev,curr
    def reverseKGroup(self, head, k):
        temp=head
        count=0
        while temp:
            temp=temp.next
            count+=1
        if count<k:
            return head
        new_head,next_segment = self.reverseKNodes(head,k)
        head.next=self.reverseKGroup(next_segment,k)
        return new_head
        