class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>adj(n);
        vector<int>ind(n,0);
        for(int i=0;i<prerequisites.size();i++)
        {
            int src=prerequisites[i][0];
            int dest=prerequisites[i][1];
            adj[dest].push_back(src);
            ind[src]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(ind[i]==0)
                q.push(i);
        }
        vector<int>ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int i=0;i<adj[node].size();i++)
            {
                int neigh=adj[node][i];
                ind[neigh]--;
                if(ind[neigh]==0)
                    q.push(neigh);
            }
        }
        if(ans.size()!=n)
            return {};
        return ans;
    }
};