class Solution {
public:
    int sum(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int r=n%10;
            sum=sum+r;
            n=n/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=sum(nums[i]);
            mini=min(nums[i],mini);
        }
        return mini;
    }
};