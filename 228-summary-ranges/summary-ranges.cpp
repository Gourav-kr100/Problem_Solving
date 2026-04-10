class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>result;
        int start=0;
        for(int i=0;i<nums.size();i++)
        {
            while(i+1<nums.size() && nums[i+1]==nums[i]+1)
            {
                i++;
            }
            if(nums[start]!=nums[i])
            {
                string ans=to_string(nums[start])+"->"+to_string(nums[i]);
                result.push_back(ans);
            }
            else
            result.push_back(to_string(nums[start]));
            start=i+1;
        }
        return result;
    }
};