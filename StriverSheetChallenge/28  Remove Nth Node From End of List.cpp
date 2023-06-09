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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//if i maintain a node (fast node)which is n+1 steps ahead and that node reaches NULL then I know which node is to be removed(node to next of slow node)
        if(head==NULL)
            return head;
        ListNode*slow=NULL,*fast=head;
        int i=0;
        while(fast!=NULL)
        {
            i++;
            if(fast==NULL)
                fast=head;
            else
                fast=fast->next;
            if(i>n)
            {
                if(slow!=NULL)
                    slow=slow->next;
                else 
                    slow=head;
            }
        }
        if(slow==NULL)
            return head->next;
        if(slow->next!=NULL)
            slow->next=slow->next->next;
        return head;
    }
};
