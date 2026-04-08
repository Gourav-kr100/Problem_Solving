class Solution {
public:
    void dfs(int a,vector<int> &visited,vector<vector<int>> &adj)
    {
        visited[a]=1;
        for(int i=0;i<adj[a].size();i++)
        {
            int neigh=adj[a][i];
            if(visited[neigh]==0)
            dfs(neigh,visited,adj);
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int n=isConnected.size();
        vector<vector<int>>adj(n);
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(isConnected[i][j]==1 && i!=j)
                adj[i].push_back(j);
        }
       }
     vector<int>visited(n+1,0);
       for(int i=0;i<n;i++)
       {
        if(visited[i]==0)
        {
            dfs(i,visited,adj);
            count++;
        }
       }
       return count;
    }
};