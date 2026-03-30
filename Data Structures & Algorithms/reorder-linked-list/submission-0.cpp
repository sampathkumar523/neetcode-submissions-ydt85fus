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
    void reorderList(ListNode* head) {
        int len = 0,n=0;

        unordered_map<int, ListNode*> mp;
        ListNode* temp = head;

        while(temp != nullptr)
        {
            mp[n] = temp;
            n++;   
            temp = temp->next;         
        }

        int index = 0;
        len = n;     

        while(index < (n-1)/2)
        {
            //insertafter(index, len);
            mp[len-2]->next = nullptr;
            mp[len-1]->next = mp[index+1];
            mp[index]->next = mp[len-1];

            index++;
            len--;
        }
    }
};
