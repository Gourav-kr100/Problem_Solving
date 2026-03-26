class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp; // creating map to track the losers only.....
        vector<int>winner;
        vector<int>loser;
        for(int i=0;i<matches.size();i++)
        {
           mp[matches[i][1]]++;
        }
        for(int i=0;i<matches.size();i++)
        {
            if(mp.find(matches[i][0])==mp.end() && find(winner.begin(),winner.end(),matches[i][0])==winner.end())  //creating list for the winners..
                winner.push_back(matches[i][0]);
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