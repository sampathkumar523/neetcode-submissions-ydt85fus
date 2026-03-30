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
        
        ListNode *head = nullptr;
        if(list1 == nullptr && list2 == nullptr)
        {
            return nullptr;
        }
        else if(list1 == nullptr)
        {
            return list2;
        }
        else if(list2 == nullptr)
        {
            return list1;
        }
        else
        {
            if(list1->val < list2->val)
                head = list1;
            else
                head = list2;
        }

        ListNode *temp1 = list1 , *temp2 = list2, *prev1 = nullptr;


        while(temp1 != nullptr && temp2 != nullptr)
        {
                if(temp1->val < temp2->val)
                {
                    prev1 = temp1;
                    temp1 = temp1->next;                   
                }        
                else
                {
                    if(prev1 == nullptr)
                    {
                        prev1 = temp2;
                        temp2=temp2->next;
                        prev1->next=temp1;
                    }
                    else
                    {
                        prev1->next = temp2;                       
                        temp2 = temp2->next;
                        prev1->next->next = temp1;
                        prev1=prev1->next;                                
                    }
                        
                }          
        }    

        if(temp1 == nullptr)
        {
            prev1->next = temp2;
        }                
                
        return head;    
    }
};
