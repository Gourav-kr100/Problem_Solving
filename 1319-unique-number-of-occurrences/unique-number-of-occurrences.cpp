class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto &it : mp)
        {
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==1)
            return true;
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]==ans[i-1])
                return false;
        }
        return true;
    }
};