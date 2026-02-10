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
    void path(TreeNode* root,int target,vector<vector<int>> &ans,vector<int>&res)
    {
        if(root==NULL)
            return;
        target=target-root->val;
        res.push_back(root->val);
        if(root->left==NULL && root->right==NULL && target==0)
            ans.push_back(res);
        path(root->left,target,ans,res);
        path(root->right,target,ans,res);
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return {};
        vector<vector<int>>ans;
        vector<int>res;
        path(root,targetSum,ans,res);
            return ans;
    }
};