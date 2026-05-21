class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxc=INT_MIN;
        vector<bool>ans;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>maxc)
                maxc=candies[i];
        }
        for(int i=0;i<candies.size();i++)
        {
            int res=candies[i]+extraCandies;
            if(res>=maxc)
                ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
};