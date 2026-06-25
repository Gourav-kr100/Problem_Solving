class Solution {
public:
    bool check(vector<int>& nums,int i,int targetsum,vector<vector<int>>&dp)
    {
        if(i==nums.size())
        {
            if(targetsum==0)
            return true;
            else 
             return false;
        }
        if(dp[i][targetsum]!=-1)
            return dp[i][targetsum];
        if(nums[i]>targetsum)
            return dp[i][targetsum]=check(nums,i+1,targetsum,dp);
        bool c1=check(nums,i+1,targetsum-nums[i],dp);
        bool c2=check(nums,i+1,targetsum,dp);
        return dp[i][targetsum]=c1||c2;
            
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2!=0)
            return false;
        int n=nums.size();
        vector<vector<int>> dp(n + 1, vector<int>((sum / 2) + 1, -1));
        return check(nums,0,sum/2,dp);
    }
};