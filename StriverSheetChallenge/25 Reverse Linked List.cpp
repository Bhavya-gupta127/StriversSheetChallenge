class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* newhead=NULL,*temp;
        while(head!=NULL)
        {
            temp=head->next;
            head->next=newhead;
            newhead=head;
            head=temp;
        }
        return newhead;
    }
};
