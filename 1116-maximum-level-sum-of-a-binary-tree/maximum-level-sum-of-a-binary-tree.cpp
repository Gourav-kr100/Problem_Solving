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
    int maxLevelSum(TreeNode* root) {
        int res=INT_MIN;
        queue<TreeNode *>q;
        q.push(root);
        TreeNode *temp;
        int ansl;
        int level=0;
        while(!q.empty())
        {
            int sum=0;
            int size=q.size();
            level++;
            for(int i=0;i<size;i++)
            {
                temp=q.front();
                q.pop();
                sum=sum+temp->val;
                if(temp->left)
                    q.push(temp->left);
                 if(temp->right)
                    q.push(temp->right);
            }
            if(sum>res)
            {
                res=sum;
                ansl=level;
            }
        }
        return ansl;
    }
};