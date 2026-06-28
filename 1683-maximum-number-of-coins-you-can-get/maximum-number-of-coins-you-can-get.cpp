class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int n1=piles.size()/3;
        int result=0;
        for(int i=n1;i<n;i=i+2)
        {
            result+=piles[i];
        }
        return result;
    }
};