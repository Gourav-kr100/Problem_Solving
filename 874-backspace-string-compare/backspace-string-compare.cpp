class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        string res="";
        string res1="";
        char c;
        for(int i=0;i<s.size();i++)
        {
             c=s[i];
            if(c=='#')
            {
            if(!st.empty())
            {
                st.pop();
            }
            }
            else
            st.push(c);
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
         for(int i=0;i<t.size();i++)
        {
            char c1=t[i];
            if(c1=='#'){
            if(!st.empty())
            {
                st.pop();
           }
            }
            else
            st.push(c1);
        }
          while(!st.empty())
        {
            res1+=st.top();
            st.pop();
        }
        reverse(res1.begin(),res1.end());
        return res==res1;
    }
};