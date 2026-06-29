class Solution {
public:
    int profit(int k,vector<int>& prices,int i,vector<vector<int>> &dp)
    {
        if(i==prices.size())
            return 0;
        if(k==0)
            return 0;
        if(dp[i][k]!=-1)
            return dp[i][k];
        if(k%2==0)
        {
            int c1=profit(k-1,prices,i+1,dp)-prices[i];
             int c2=profit(k,prices,i+1,dp);
             return dp[i][k]=max(c1,c2);
        }
        else
        {
             int c1=profit(k-1,prices,i+1,dp)+prices[i];
             int c2=profit(k,prices,i+1,dp);
             return dp[i][k]=max(c1,c2);
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        int m=2*k;
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return profit(2*k,prices,0,dp);
    }
};