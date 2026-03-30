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
    int maxDepth(TreeNode* root) {                
        return maxDepth(root,0);
    }

    int maxDepth(TreeNode* root, int x)
    {
        if(root == nullptr) {return x;}

        int left = maxDepth(root->left, x+1);
        int right = maxDepth(root->right, x+1);

        return max(left, right);
    }
};
