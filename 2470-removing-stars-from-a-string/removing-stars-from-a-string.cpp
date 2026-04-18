class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char &c : s)
        {
            if(c=='*')
            {
                if(!st.empty())
                    st.pop();
                continue;
            }
            st.push(c);
        }
        if(st.empty())
            return "";
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
     reverse(res.begin(),res.end());
     return res;
    }
};