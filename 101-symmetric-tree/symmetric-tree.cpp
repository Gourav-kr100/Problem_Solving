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
    bool symetric(TreeNode* root,TreeNode* Root)
    {
        if(root==NULL && Root==NULL)
            return true;
         if(root==NULL || Root==NULL)
            return false;
        if(root->val!=Root->val)
            return false;
        return symetric(root->left,Root->right) && symetric(root->right,Root->left);
    }
    bool isSymmetric(TreeNode* root) {
        return symetric(root->left,root->right);
    }
};