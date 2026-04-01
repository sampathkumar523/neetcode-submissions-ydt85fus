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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root)
        {
            if(root->val == subRoot->val)
            {
                LatestNode = root;
                if(isSameTree(LatestNode,subRoot))
                {
                    res = true;
                }
            }

            isSubtree(root->left, subRoot);
            isSubtree(root->right, subRoot);
        }    

        return res;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        }
        if (p && q && p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        } else {
            return false;
        }
    }

private:
    TreeNode* LatestNode = nullptr;
    bool res = false;
};
