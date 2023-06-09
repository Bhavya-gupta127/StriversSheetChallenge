/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head1=list1,*head2=list2,*temp,*ans;
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        if(list1->val<=list2->val)
            ans=list1;
        else
            ans=list2;
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val<=head2->val)
            {
                while(head1->next!=NULL && head1->next->val<=head2->val)
                    head1=head1->next;
                temp=head1->next;
                head1->next=head2;
                head1=temp;
            }
            else
            {
                while(head2->next!=NULL && head2->next->val<=head1->val)
                    head2=head2->next;
                temp=head2->next;
                head2->next=head1;
                head2=temp;
            }
        }
        return ans;
    }

};

