class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dist(n+1,INT_MAX);
         vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<times.size();i++)
        {
            int src=times[i][0];
            int dest=times[i][1];
            int weight=times[i][2];
            adj[src].push_back({dest,weight});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty())
        {
            pair<int,int>p=pq.top();
            pq.pop();
            int d=p.first;
            int node=p.second;
             if(d>dist[node])
                    continue;
            for(int i=0;i<adj[node].size();i++)
            {
                int neighb=adj[node][i].first;
                int w=adj[node][i].second;
               if(d+w<dist[neighb]){
                dist[neighb]=w+d;
                pq.push({w+d,neighb});
            }
            }
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX)
                return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};