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
    int diameterOfBinaryTree(TreeNode* root) {              
        maxD = 0;
        maxDepth(root);
        return maxD;
    }

    int maxDepth(TreeNode* node)
    {
        if(node == nullptr) return 0;
        else
        {
            int left = maxDepth(node->left);
            int right = maxDepth(node->right);

            maxD = max(maxD,left+right);
            return 1+max(left,right);
        }        
    }
private:
     int maxD;
};
