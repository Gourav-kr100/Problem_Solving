class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++)
        {
            while(!st.empty() && st.top()>0 && asteroids[i]<0)
            {
                int sum=asteroids[i]+st.top();
                if(sum>0)
                    asteroids[i]=0;
                else if(sum==0)
                {
                    st.pop();
                    asteroids[i]=0;
                }
                else
                    st.pop();
            }
            if(asteroids[i]!=0)
                st.push(asteroids[i]);
        }
        vector<int>res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;    
        }
};