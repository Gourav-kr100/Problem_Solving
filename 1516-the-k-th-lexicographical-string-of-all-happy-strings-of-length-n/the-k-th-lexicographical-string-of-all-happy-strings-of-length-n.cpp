class Solution {
public:
    void solve(int n,int k,int &count,string &result,string &curr)
    {
            if(curr.size()==n)
            {
                count++;
                if(count==k)
                {
                    result=curr;
                }
                return;
            }
            for(char ch='a';ch<='c';ch++)
            {
                if(!curr.empty() && curr.back()==ch)
                    continue;
                curr.push_back(ch);
                solve(n,k,count,result,curr);
                curr.pop_back();
            }
        return;
    }
    string getHappyString(int n, int k) {
        string result="";
        int count=0;
        string curr="";
        solve(n,k,count,result,curr);
        return result;
    }
};