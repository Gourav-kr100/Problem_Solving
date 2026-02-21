class Solution {
public:
    int count(int m,int n,vector<vector<int>> &dp)
    {
        if(n==1 || m==1)
            return 1;
        if(dp[m][n]!=-1)
        {
            return dp[m][n];
        }
        dp[m][n]=count(m-1,n,dp)+count(m,n-1,dp);
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return count(m,n,dp);
    }
};
