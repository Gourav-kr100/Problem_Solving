class Solution {
public:
    bool isAnagram(string s, string t) {
        int src[26];
        int dest[26];
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
       {
            src[s[i]-'a']++;
       }
       for(int i=0;i<t.size();i++)
       {
        dest[t[i]-'a']++;
       }
       for(int i=0;i<26;i++)
       {
            if(src[i]!=dest[i])
                return false;
       }
       return true;
    }
};