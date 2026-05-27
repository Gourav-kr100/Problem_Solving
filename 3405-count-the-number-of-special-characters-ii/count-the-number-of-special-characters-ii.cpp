class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>up(26,-1);
        vector<int>lw(26,-1);
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(islower(ch))
            {
                lw[ch-'a']=i; //storing the last index
            }
            if(isupper(ch) && up[ch-'A']==-1)
                up[ch-'A']=i;
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(lw[i]<up[i] && lw[i]!=-1 && up[i]!=-1)
                count++;
        }
        return count;
    }
};