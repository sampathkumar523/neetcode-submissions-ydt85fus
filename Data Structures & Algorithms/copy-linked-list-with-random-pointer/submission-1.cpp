/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {        
        if(head == nullptr)
            return nullptr;

        Node *prev = nullptr, *curr = head;
        unordered_map<Node*, Node*> mp;

        while(curr != nullptr)
        {                                      
            Node* temp = new Node(curr->val);          
            
            if(prev != nullptr)
            {                
                prev->next = temp;               
            }           
            
            prev = temp;
            mp[curr] = temp;
            curr = curr->next;
        }

        prev->next = nullptr;


        Node* temp = head;
        while(temp != nullptr)
        {
            Node *newCopy = mp[temp];
            newCopy->next = mp[temp->next];
            newCopy->random = mp[temp->random];

            temp =  temp->next;
           
        }

        return mp[head];

    }
};
