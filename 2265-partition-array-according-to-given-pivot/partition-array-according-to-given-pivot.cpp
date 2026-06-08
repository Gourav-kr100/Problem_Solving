class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int cl=0,ce=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                cl++;
            else if(nums[i]==pivot)
                ce++;
        }
        int i=0;
        int j=cl;
        int k=cl+ce;
        vector<int>ans(nums.size());
        for(int a=0;a<nums.size();a++)
        {
            if(nums[a]<pivot)
            {
                ans[i]=nums[a];
                i++;
            }
             else if(nums[a]==pivot)
            {
                ans[j]=nums[a];
                j++;
            }
            else
            {
                ans[k]=nums[a];
                k++;
            }
        }
        return ans;
    }
};