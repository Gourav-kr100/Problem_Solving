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
    int pairSum(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *curr=slow;
        ListNode *prev=NULL;
        while(curr)
        {
            ListNode *fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        int m=INT_MIN;
        ListNode *second=prev;
        ListNode *temp=head;
        while(temp && second)
        {
                int sum=temp->val+second->val;
                m=max(m,sum);
                temp=temp->next;
                second=second->next;
        }
        return m;
    }
};