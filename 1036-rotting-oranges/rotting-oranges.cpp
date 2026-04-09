class Solution {
public:
    bool valid(int i,int j,int m,int n)
    {
        if(i<0 || i>=m || j<0 || j>=n)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh=0;
        int time=0;
        int x[4]={1,-1,0,0};
        int y[4]={0,0,1,-1};
        queue<pair<int,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    fresh++;
                else if(grid[i][j]==2)
                {
                    q.push({i,j});
                    grid[i][j]=0;
                }
            }
        }
        while(!q.empty() && fresh>0)
        {
            int s=q.size();
            time++;
            while(s--)
            {
                pair<int,int>p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                for(int k=0;k<4;k++)
                {
                    int row=r+x[k];
                    int col=c+y[k];
                    if(valid(row,col,m,n) && grid[row][col]==1)
                    {
                        q.push({row,col});
                        grid[row][col]=0;
                        fresh--;
                    }
                }
            }
        }
    if(fresh>0)
        return -1;
    return time;
    }
};