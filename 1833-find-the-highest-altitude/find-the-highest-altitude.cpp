class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0;
        int maxalt=0;
        for(int i=0;i<gain.size();i++)
        {
            curr+=gain[i];
            maxalt=max(curr,maxalt);
        }
        return maxalt;
    }
};