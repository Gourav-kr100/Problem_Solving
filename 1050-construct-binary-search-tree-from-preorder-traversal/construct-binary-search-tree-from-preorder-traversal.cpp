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
    TreeNode *tree(vector<int>& preorder,int &idx,int lower,int upper)
    {
        if(idx==preorder.size() || preorder[idx]<lower || preorder[idx]>upper)
            return NULL;
        TreeNode *root=new TreeNode(preorder[idx++]);
        root->left=tree(preorder,idx,lower,root->val);
        root->right=tree(preorder,idx,root->val,upper);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int lower=INT_MIN;
        int upper=INT_MAX;
        int idx=0;
        return tree(preorder,idx,lower,upper);
    }
};