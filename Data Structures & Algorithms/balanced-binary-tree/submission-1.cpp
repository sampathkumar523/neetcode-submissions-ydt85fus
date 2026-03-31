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
    bool isBalanced(TreeNode* root) {  
        res = true;    
        depth(root);
        return res;
    }

    int depth(TreeNode* root)
    {
        if(root == nullptr) 
        {            
            return 0;
        }
        
        int leftdepth = depth(root->left);
        int rightdepth = depth(root->right);
    
        if(abs(leftdepth-rightdepth) > 1) 
        {
            res = false;
        }

        return 1 + max(leftdepth,rightdepth);
       
    }
private:
    int res;

};
