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
    int search(vector<int> &inorder,int element,int left,int right)
    {
        for(int i=left;i<=right;i++)
        {
            if(element==inorder[i])
                return i;
        }
        return -1;
    }
    TreeNode *tree(vector<int>&preorder,vector<int>&inorder,int &idx,int left,int right)
    {
        if(left>right)
            return NULL;
        TreeNode *root=new TreeNode(preorder[idx]);
        int i=search(inorder,preorder[idx],left,right);
        idx++;
        root->left=tree(preorder,inorder,idx,left,i-1);
        root->right=tree(preorder,inorder,idx,i+1,right);
        return root;
        }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int left=0;
        int right=preorder.size()-1;
        int idx=0;
        return tree(preorder,inorder,idx,left,right);
    }
};