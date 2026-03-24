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
    void inorder(TreeNode* root3,string &ans)
    {
        if(root3==NULL)
            return;
        if(root3->left==NULL && root3->right==NULL)
            {
                ans+=to_string(root3->val)+",";
               return;
            }
        inorder(root3->left,ans);
        inorder(root3->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="";
        string s2="";
        inorder(root1,s1);
        inorder(root2,s2);
        if(s1==s2)
            return true;
        else
            return false;
    }
};