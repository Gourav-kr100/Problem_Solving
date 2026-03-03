class Solution {
public:
    void output(int idx,string &s,vector<string> &ans,string &temp)
    {
        if(idx==s.size())
        {
            ans.push_back(temp);
            return;
        }
        if(isdigit(s[idx]))
        {
            temp.push_back(s[idx]);
            output(idx+1,s,ans,temp);
            temp.pop_back();
        }
        else{
        temp.push_back(toupper(s[idx]));
        output(idx+1,s,ans,temp);
        temp.pop_back();
        temp.push_back(tolower(s[idx]));
        output(idx+1,s,ans,temp);
        temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string temp="";
        int idx=0;
        output(0,s,ans,temp);
        return ans;
    }
};