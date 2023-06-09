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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,cur;
        ListNode*head;
        ListNode *ans=NULL;
        while(1)
        {
            cur=carry;
            if(l1!=NULL)
                cur+=l1->val;
            if(l2!=NULL)
                cur+=l2->val;
            if(l1==NULL && l2==NULL && carry==0)
                break;
            if(ans==NULL)
            {
                ans=new ListNode(cur%10);
                head=ans;
            }
            else
            {
                ans->next=new ListNode(cur%10);
                ans=ans->next;
            }
            cur/=10;
            carry=cur%10;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;

        }
        return head;
    }
};
