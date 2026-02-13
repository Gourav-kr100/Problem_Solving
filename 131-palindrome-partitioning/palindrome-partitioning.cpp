class Solution {
public:
    bool ispalindrome(string s)
    {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
    void parts(string s,vector<vector<string>> &ans,vector<string> &par)
    {
        if(s=="")
            {
                ans.push_back(par);
                return;
            }
        for(int i=0;i<s.length();i++)
        {
            string part=s.substr(0,i+1);
            if(ispalindrome(part))
            {
                par.push_back(part);
                parts(s.substr(i+1),ans,par);
                par.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> par;
         parts(s,ans,par);
         return ans;
    }
};