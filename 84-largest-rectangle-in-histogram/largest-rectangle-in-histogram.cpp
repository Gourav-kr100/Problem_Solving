class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>r(n);
        vector<int>l(n);
        //calculating right smallest elements
        st.push(n-1);
        r[n-1]=n;
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            if(st.empty())
                r[i]=n;
            else
                r[i]=st.top();
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
         //calculating left smallest elements
        st.push(0);
        l[0]=-1;
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            if(st.empty())
                l[i]=-1;
            else
                l[i]=st.top();
            st.push(i);
        }
        int area;
        int ma=0;
        for(int i=0;i<n;i++)
        {
            area=heights[i]*(r[i]-l[i]-1);
            ma=max(ma,area);
        }
        return ma;
    }
};