class Solution {
public:
    int profit(vector<int>& prices,int i,int k,vector<vector<int>>&dp)
    {
        if(i==prices.size())
        {
            return 0;
        }
        if(k==0)
            return 0;
        if(dp[i][k]!=-1)
            return dp[i][k];
        if(k%2==0)
        {
            int c1=profit(prices,i+1,k-1,dp)-prices[i];
            int c2=profit(prices,i+1,k,dp);
            return dp[i][k]=max(c1,c2);
        }
        else
        {
            int c1=profit(prices,i+1,k-1,dp)+prices[i];
             int c2=profit(prices,i+1,k,dp);
            return dp[i][k]=max(c1,c2);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1, vector<int>(4+1, -1));
        return profit(prices,0,4,dp);
    }
};