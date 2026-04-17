class Solution {
public:
    bool result=false;
    void dfs(vector<int>&visited,vector<int>&path,vector<vector<int>>& prerequisites,vector<vector<int>>&adj,int node)
    {
        visited[node]=1;
        path[node]=1;
        for(int i=0;i<adj[node].size();i++)
        {
            int neigh=adj[node][i];
            if(visited[neigh]==1 && path[neigh]==1)
                result=true;
            if(visited[neigh]==0)
                dfs(visited,path,prerequisites,adj,neigh);
        }
        path[node]=0;
        return;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>visited(numCourses,0);
        vector<int>path(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {
            int src=prerequisites[i][1];
            int dest=prerequisites[i][0];
            adj[src].push_back(dest);
        }
        for(int i = 0; i < numCourses; i++)
        {
            if(visited[i] == 0)
                dfs(visited, path,prerequisites,adj,i);
        }
        return !result;
    }
};