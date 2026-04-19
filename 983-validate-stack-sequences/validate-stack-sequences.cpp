class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int m=pushed.size();
        int n=popped.size();
        int i=0,j=0;
        stack<int>st;
        while(i<m && j<n)
        {
            st.push(pushed[i]);
            while(!st.empty()  && j<n && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
            i++;
        }
        return st.empty();
    }
};