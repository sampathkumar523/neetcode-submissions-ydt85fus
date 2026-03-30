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
    bool hasCycle(ListNode* head) {
      if(head == nullptr)
        return false;

      ListNode *fast = head, *slow = head;

      while(fast->next != nullptr && fast->next != slow)
      {
        fast = fast->next->next;
        if(fast == nullptr)
            break;
        slow = slow->next;
      }

      if(fast == nullptr || fast->next == nullptr)
        return false;
    
      return true;
    }
};
