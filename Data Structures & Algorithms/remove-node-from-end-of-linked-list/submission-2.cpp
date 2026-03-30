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
        ListNode* slow = nullptr,*prev = nullptr;
        ListNode* fast = head;

        int count = 0;

        while(fast != nullptr)
        {
            fast = fast->next;
            count++; 

            if(count == n)
            {
                prev = slow;
                slow = head;
            }           
            if(count > n)
            {
                prev = slow;
                slow = slow->next;
            }
        }

        if(prev != nullptr)
        {
            prev->next = slow->next; 
            return head;               
        }
        else
        {
            return slow->next;
        }        
    }
};
