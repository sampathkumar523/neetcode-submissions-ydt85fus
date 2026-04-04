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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if(root == nullptr) return res;

        queue<TreeNode* > que;

        que.push(root);
        vector<int> temp;      

        int size = que.size();  
        int currsize = 0;
                   
            while(!que.empty())
            {
                TreeNode *p = que.front();
                currsize++;
                if(currsize <= size)
                {
                   temp.push_back(p->val);
                   que.pop();
                   if(p->left)
                        que.push(p->left);
                    if(p->right)
                        que.push(p->right);
                }
                else
                {
                    res.push_back(temp);
                    temp.clear();
                    currsize = 0;
                    size = que.size();
                }
            }
            
            res.push_back(temp);

        return res;
    }
};
