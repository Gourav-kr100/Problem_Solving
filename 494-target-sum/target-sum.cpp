class Solution {
public:
    int sum(vector<int>& nums,int target,int i,vector<vector<int>>&dp)
    {
        if(i==nums.size())
        {
            if(target==0)
                return 1;
            else
            return 0;
        }
        if(dp[i][target]!=-1)
            return dp[i][target];
        if(nums[i]>target)
            return dp[i][target]=sum(nums,target,i+1,dp);
        int c1=sum(nums,target-nums[i],i+1,dp);
        int c2=sum(nums,target,i+1,dp);
        return dp[i][target]=c1+c2;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
            totalsum+=nums[i];
        if((totalsum+target)%2!=0)
            return 0;
        if(abs(target)>totalsum)
            return 0;
        int pos=(target+totalsum)/2;
        vector<vector<int>> dp(nums.size()+1, vector<int>(pos+1, -1));
        return sum(nums,pos,0,dp);
    }
};