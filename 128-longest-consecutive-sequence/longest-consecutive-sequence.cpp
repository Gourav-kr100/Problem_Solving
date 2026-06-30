class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++)
            st.insert(nums[i]);
        int count=1;
        int ans=INT_MIN;
        for(int  i : st)
        {
             count=1;
             int curr=i;
            if(st.find(i-1)!=st.end())
                continue;
            else
            {
                while(st.find(curr+1)!=st.end())
                {
                    count++;
                    curr++;
                }
            }
                ans=max(count,ans);
        }
        return ans;
    }
};