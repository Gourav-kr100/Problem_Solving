/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
         if(!root)
            return "null";
        string ans="";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* a=q.front();
            q.pop();
            if(a==NULL)
            {
                ans+="null,";
                continue;
            }
            ans+=to_string(a->val)+",";
                q.push(a->left);
                q.push(a->right);
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="null")
            return NULL;
        stringstream ss(data);
        string val;
        getline(ss,val,',');
        TreeNode* root=new TreeNode(stoi(val));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *temp=q.front();
            q.pop();
            getline(ss,val,',');
            if(val!="null")
            {
                temp->left=new TreeNode(stoi(val));
                q.push(temp->left);
            }
            getline(ss,val,',');
            if(val!="null")
            {
                temp->right=new TreeNode(stoi(val));
                q.push(temp->right);
            }
        }
        return root; 
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;