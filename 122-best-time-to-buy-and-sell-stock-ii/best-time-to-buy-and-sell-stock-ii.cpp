class Solution {
public:
    int profit(vector<int>&prices,int k,int i,vector<vector<int>>& dp)
    {
        if(i==prices.size())
            return 0;
        if(dp[i][k]!=-1)
            return dp[i][k];
        if(k==2)
        {
            int c1=profit(prices,k-1,i+1,dp)-prices[i];
            int c2=profit(prices,k,i+1,dp);
            return dp[i][k]=max(c1,c2);
        }
        else
        {
            int c1=profit(prices,k+1,i+1,dp)+prices[i];
            int c2=profit(prices,k,i+1,dp);
            return dp[i][k]=max(c1,c2);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size()+1;
        vector<vector<int>> dp(n, vector<int>(3, -1));
        return profit(prices,2,0,dp);
    }
};