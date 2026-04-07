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
    bool isValidBST(TreeNode* root) {
       bres = true;
       checksubtree(root,root->val);
       return bres;

    }

    void checksubtree(TreeNode* root, int val)
    {
        if(root == nullptr)
            return;

        checksubtree(root->left,val);
        checksubtree(root->right,val);


        checkleftsubtree(root->left,root->val);
        checkrightsubtree(root->right,root->val);
   
    }
    void checkleftsubtree(TreeNode* root,int val)
    {
       if(root == nullptr)
       {
        return;
       }
       
       if(root->val >= val)
       {
        bres = false;
       }     

       checkleftsubtree(root->left,val); 
       checkleftsubtree(root->right,val);
    }

    void checkrightsubtree(TreeNode* root,int val)
    {
       if(root == nullptr)
       {
        return;
       }

       if(root->val <= val)
       {
        bres = false;
       }    
       
       checkrightsubtree(root->left,val);
       checkrightsubtree(root->right,val);
       

    }
private:
    bool bres;
};
