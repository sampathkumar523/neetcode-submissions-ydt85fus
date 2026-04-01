/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == nullptr && q == nullptr) return true;

        queue<TreeNode* > que1;
        queue<TreeNode* > que2;

        if(p != nullptr)
        {
            que1.push(p);
        }

        if(q != nullptr)
        {
            que2.push(q);
        }

        while(!que1.empty() && !que2.empty())
        {
            TreeNode* val1 = que1.front();
            que1.pop();
            TreeNode* val2 = que2.front();
            que2.pop();

            if(val1->val != val2->val)
                return false;    
           

            if(val1->left == nullptr && val2->left != nullptr) return false;
            if(val1->left != nullptr && val2->left == nullptr) return false;
            if(val1->right == nullptr && val2->right != nullptr) return false;
            if(val1->right != nullptr && val2->right == nullptr) return false;
            
            if(val1->left != nullptr && val2->left !=nullptr)
            {
                que1.push(val1->left);
                que2.push(val2->left);
            }

            if(val1->right != nullptr && val2->right !=nullptr)
            {
                que1.push(val1->right);
                que2.push(val2->right);
            }
        }

        if(que1.size() && que2.empty()) return false;
        if(que2.size() && que1.empty()) return false;



        return true;
    }
};
