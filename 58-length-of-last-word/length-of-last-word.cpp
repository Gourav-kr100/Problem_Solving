class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size()-1;
        while(len>=0 && s[len]==' ')
            len--;
        int ans=0;
        while(len>=0 && s[len]!=' ')
            {
                len--;
                ans++;
            }
            return ans;
    }
};