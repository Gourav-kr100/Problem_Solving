class Solution {
public:
    bool valid(int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m)
            return false;
        return true;
    }
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        priority_queue<
    pair<int, pair<int,int>>,
    vector<pair<int, pair<int,int>>>,
    greater<pair<int, pair<int,int>>>> pq;
    vector<vector<int>> res(n, vector<int>(m, INT_MAX));
    pq.push({grid[0][0],{0,0}});
    res[0][0]=grid[0][0];
    int x[4]={1,-1,0,0};
    int y[4]={0,0,-1,1};
    while(!pq.empty())
    {
        pair<int,pair<int,int>>p=pq.top();
        pq.pop();
        int money=p.first;
        int r=p.second.first;
        int c=p.second.second;
        if(money>res[r][c])
            continue;
        for(int i=0;i<4;i++)
        {
            int x1=r+x[i];
            int y1=c+y[i];
            if(valid(x1,y1,n,m))
            {
                    int newmoney=max(money,grid[x1][y1]);
                    if(newmoney<res[x1][y1])
                    {
                        res[x1][y1]=newmoney;
                        pq.push({newmoney,{x1,y1}});
                    }
            }
        }
    }
    return res[n-1][m-1];
    }
};