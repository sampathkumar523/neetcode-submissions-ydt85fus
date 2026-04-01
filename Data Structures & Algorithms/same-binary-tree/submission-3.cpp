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
        res = true;
        checkSameTree(p,q);
        return res;
    }

    void checkSameTree(TreeNode* p, TreeNode* q)
    {
        if(p == nullptr && q == nullptr) return;

        if(p == nullptr && q != nullptr)
        {
            res = false;
            return;
        }
        else if(p != nullptr && q == nullptr)
        {
            res = false;
            return;
        }
        
        checkSameTree(p->left,q->left);
        checkSameTree(p->right,q->right);       

        if(p->val != q->val)
        {
            res = false;
            return;
        }

    }

private:
    bool res;
};
