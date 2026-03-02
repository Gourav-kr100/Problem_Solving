class Solution {
public:
    void generator(int start,int end,string &temp,vector<string>&ans,int n)
    {
        if(start==n && end==n)
        {
            ans.push_back(temp);
            return;
        }
        if(start<n)
        {
            temp.push_back('(');
            generator(start+1,end,temp,ans,n);
            temp.pop_back();
        }
        if(end<start)
        {
             temp.push_back(')');
            generator(start,end+1,temp,ans,n);
            temp.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        int start=0,end=0;
        string temp;
        vector<string>ans;
        generator(start,end,temp,ans,n);
        return ans;
    }
};