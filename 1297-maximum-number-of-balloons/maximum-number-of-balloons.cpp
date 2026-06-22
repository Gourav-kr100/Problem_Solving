class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        for(int i=0;i<text.length();i++)
            have[text[i]]++;
        need['b']=1;
        need['a']=1;
        need['l']=2;
        need['o']=2;
        need['n']=1;
        int res=INT_MAX;
        for(auto i:need)
        {
            char c=i.first;
            int fneed=i.second;
            int fhave=have[c];
            int ans=fhave/fneed;
            res=min(res,ans);
        }
        return res;
    }
};