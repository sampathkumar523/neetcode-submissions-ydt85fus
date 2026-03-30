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
        int carr = 0;

        ListNode* temp1 = l1,*prev= nullptr;
        ListNode* temp2 = l2;
        ListNode* newhead;

        while(temp1 != nullptr && temp2 != nullptr)
        {
            ListNode *n = new ListNode(0);
            n->next = nullptr;

            int sum = temp1->val + temp2->val;         

            if((sum+carr) >= 10)
            {
                n->val = (sum+carr)%10;  
                carr = 1;                             
            }
            else
            {
                n->val = sum+carr;
                carr = 0;
            }

            if(prev == nullptr)
            {
                newhead = n;
                prev = n;
            }
            else
            {
                prev->next = n;
                prev = prev->next;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp1 != nullptr)
        {
            ListNode *n = new ListNode(0);
            int sum = temp1->val;

            if((sum+carr) >= 10)
            {
                n->val = (sum+carr)%10;   
                carr = 1;                             
            }
            else
            {
                n->val = sum+carr;
                carr = 0;
            }

            prev->next = n;
            prev = prev->next;
            temp1 = temp1->next;
        }
        while(temp2 != nullptr)
        {
            ListNode *n = new ListNode(0);
            int sum = temp2->val;

            if((sum+carr) >= 10)
            {
                n->val = (sum+carr)%10;
                carr = 1;                                
            }
            else
            {
                n->val = sum+carr;
                carr = 0;
            }

            prev->next = n;
            prev = prev->next;
            temp2 = temp2->next;
        }


        if(carr)
        {
            ListNode* n = new ListNode(1);
            prev->next = n;
        }

        return newhead;
    }
};
