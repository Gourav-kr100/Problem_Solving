class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string res="";
        if(num.size()==k)
            return "0";
        for(int i=0;i<num.size();i++)
        {
            while(!st.empty() && k>0 && num[i]<st.top())
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0 && !st.empty())
        {
            k--;
            st.pop();
        }
        if(st.empty())
            return "0";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        for(int j=res.size()-1;j>=0;j--)
        {
            if(res[j]!='0')
                break;
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res=="")
            return "0";
        return res;
    }
};