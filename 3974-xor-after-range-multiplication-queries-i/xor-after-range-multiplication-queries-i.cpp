class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int a=0;
        int M=1e9+7;
        for(auto &q:queries)
        {
            int l=q[0];
             int r=q[1];
              int k=q[2];
               int v=q[3];
               while(l<=r)
               {
                nums[l]=(1ll*nums[l]*v)%M;
                l=k+l;
               }
        }
        for(int i=0;i<nums.size();i++)
            a=a^nums[i];
        return a;
    }
};