class Solution {
public:
void dfs(string src,string dest,unordered_set<string>&visited,unordered_map<string,vector<pair<string,double>>>adj,double &ans,double product)
{
    if(src==dest)
    {
        ans=product;
        return;
    }
    visited.insert(src);
    for(auto p : adj[src])
    {
        string d11=p.first;
        double val=p.second;
        if(visited.find(d11)==visited.end())
        dfs(d11,dest,visited,adj,ans,product*val);
    }
}
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
       unordered_map<string,vector<pair<string,double>>>adj;
        for(int i=0;i<equations.size();i++)
        {
            string src=equations[i][0];;
            string dest=equations[i][1];
            double val=values[i];
            adj[src].push_back({dest,val});
            adj[dest].push_back({src,1.0/val});
        }
        vector<double>res;
        for(auto &query : queries)
    {
        double ans=-1.0;
        double product=1.0;
        string s1=query[0];
        string d1=query[1];
        if(adj.find(s1)==adj.end() || adj.find(d1)==adj.end())
            res.push_back(-1.0);
        else if(adj.find(s1)!=adj.end() && ans==-1.0)
        {
            unordered_set<string>visited;
            dfs(s1,d1,visited,adj,ans,product);
            res.push_back(ans);
        }
    }
    return res;
    }
};