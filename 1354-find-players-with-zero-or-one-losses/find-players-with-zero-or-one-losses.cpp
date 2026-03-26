class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>winner;
        vector<int>loser;
        unordered_map<int,int>mp;
        for(int i=0;i<matches.size();i++)
        {
            mp[matches[i][1]]++;
        }
        for(int i=0;i<matches.size();i++)
            {
                if(mp.find(matches[i][0])==mp.end())
                {
                    winner.push_back(matches[i][0]);
                    mp[matches[i][0]]=2;
                }
            }
        for(auto &it : mp)
        {
            if(it.second==1)
                loser.push_back(it.first);
        }
        sort(winner.begin(),winner.end());
        sort(loser.begin(),loser.end());
        return {winner,loser};
    }
};