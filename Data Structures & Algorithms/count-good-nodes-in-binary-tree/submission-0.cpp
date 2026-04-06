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
    int goodNodes(TreeNode* root) {
       count = 0;
       preorder(root,root->val);
       return count;
    }

    void preorder(TreeNode* root, int max)
    {
        if(root == nullptr)
        {
            return;
        }
        
        if(root->val >= max)
        {
            count++;
            max = root->val;
        }
       
        preorder(root->left , max);
        preorder(root->right, max);


    }

private:
    int count;
};
