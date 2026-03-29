class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>find(n+1,0);
        if(n==1)
            return 1;
        for(auto &it : trust)
        {
            find[it[0]]--;
            find[it[1]]++;
        }
        for(int i=0;i<find.size();i++)
        {
            if(find[i]==n-1)
                return i;
        }
        return -1;
    }
};