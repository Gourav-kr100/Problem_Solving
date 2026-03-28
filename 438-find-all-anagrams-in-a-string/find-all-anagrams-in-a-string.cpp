class Solution {
public:
    bool check(char res[26])
    {
        for(char i=0;i<26;i++)
        {
            if(res[i]!=0)
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        char res[26];
        vector<int>ans;
        for(char c : p)
            res[c-'a']++;
        int i=0,j=0,n=s.size();
        while(j<n)
        {
            res[s[j]-'a']--;
            if(j-i+1==p.size())
            {
                if(check(res))
                    ans.push_back(i);
                res[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};