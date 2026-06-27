class Solution {
public:
    void solve(vector<vector<int>> &res,vector<int> &ans,int i,int k,int n)
    {
        if(k==0)
        {
            res.push_back(ans);
            return;
        }
        if(i>n)
            return;
        ans.push_back(i);
        solve(res,ans,i+1,k-1,n);
        ans.pop_back();
        solve(res,ans,i+1,k,n);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>ans;
        solve(res,ans,1,k,n);
        return res;
    }
};