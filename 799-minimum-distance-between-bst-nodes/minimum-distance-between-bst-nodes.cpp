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
    void md(TreeNode *root,int &prev,int &res)
    {
        if(root==NULL)
            return;
        md(root->left,prev,res);
            if(prev!=1e9)
            {
           int ans=root->val-prev;
            res=min(res,ans);
            }
            prev=root->val;
        md(root->right,prev,res);
    }
    int minDiffInBST(TreeNode* root) {
        int prev=-1e9;
        int res=INT_MAX;
        md(root,prev,res);
        return res;
    }
};