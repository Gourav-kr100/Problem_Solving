class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string ans=countAndSay(n-1);
        string res="";
        for(int i=0;i<ans.size();i++)
        {
            int count=1;
            char ch=ans[i];
            while(i<ans.size()-1 && ans[i]==ans[i+1])
                {
                    count++;
                    i++;
                }
            res+=to_string(count)+string(1,ch);
        }
        return res;
    }
};