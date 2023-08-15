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
    ListNode* partition(ListNode* head, int x) {
        vector<int> q;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                q.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val >= x)
            {
                q.push_back(temp->val);
            }
            temp=temp->next;
        }
        
        int i=0;
        temp=head;
        while(i<q.size())
        {
            temp->val=q[i];
            i++;
            temp=temp->next;
        }
        return head;

    }
};
