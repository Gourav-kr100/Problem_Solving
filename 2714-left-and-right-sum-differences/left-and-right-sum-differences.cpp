class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        int prevsum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            sum-=nums[i];
            ans.push_back(abs(sum-prevsum));
            prevsum+=nums[i];
        }
        return ans;
    }
};