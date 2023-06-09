class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *fast=head,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
