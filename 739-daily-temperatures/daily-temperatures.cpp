class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res(temperatures.size());
        int size=temperatures.size();
        res[size-1]=0;
        stack<int>st;
        st.push(size-1);
        for(int i=size-2;i>=0;i--)
        {
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
                st.pop();
            if(st.empty())
                res[i]=0;
            else
                res[i]=st.top()-i;
            st.push(i);
        }
        return res;
    }
};