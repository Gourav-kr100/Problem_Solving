class Solution {
public:
    int findways(vector<int>& coins,int i,int amount,vector<vector<int>>&dp)
    {
        if(amount==0)
            return 1;
        if(amount<0)
            return 0;
        if(i==coins.size())
            return 0;
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        int c1=findways(coins,i,amount-coins[i],dp);
        int c2=findways(coins,i+1,amount,dp);
        return dp[i][amount]=c1+c2;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size()+1;
        int m=amount+1;
    vector<vector<int>> dp(n, vector<int>(m, -1));
        return findways(coins,0,amount,dp);
    }
};