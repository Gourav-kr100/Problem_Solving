class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int>res(nums.size());
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]>=0)
            {
                res[i]=nums[k];
                i=i+2;
            }
            else
            {
                res[j]=nums[k];
                j=j+2;
            }
        }
        return res;
    }
};