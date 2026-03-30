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
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr)
        {
            return nullptr;
        }
      
        if(head->next == nullptr)
        {
            return head;
        }
        
        ListNode *curr = nullptr,  *prev = nullptr;

        while(head->next != nullptr)
        {
            curr = head->next;
            head->next = prev;

            prev = head;
            head = curr;
        }

        head->next = prev;
        return head;
    }
};
