class Solution {
public:
    bool res=true;
    void dfs(int node,int c,vector<int>&colors,vector<vector<int>>&graph)
    {
        colors[node]=c;
        for(int i=0;i<graph[node].size();i++)
        {
            int neighb=graph[node][i];
            if(colors[neighb]!=-1 && colors[neighb]==c)
                res=false;
            if(colors[neighb]==-1)
                dfs(neighb,1-c,colors,graph);
        }
        return;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colors(n,-1);
        for(int i=0;i<n;i++)
        {
            if(colors[i]==-1)
                dfs(i,0,colors,graph);
        }
        return res;
    }
};