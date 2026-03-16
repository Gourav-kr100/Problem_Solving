class Solution {
public:
    int count=0;
    int result=0;
    vector<vector<int>> dir{{-1,0},{1,0},{0,1},{0,-1}};
    void find(vector<vector<int>> &grid,int c,int x,int y)
    {
        if(x<0 || y<0 || x==grid.size() || y==grid[0].size() || grid[x][y]==-1)
            return;
        if(grid[x][y]==2)
        {
            if(c==count-1)
                result++;
            return;
        }
        int temp=grid[x][y];
        grid[x][y]=-1;
        for(auto &d : dir)
        {
           int x_=x+d[0];
           int y_=y+d[1];
            find(grid,c+1,x_,y_);
        }
        grid[x][y]=temp;
       // return;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int x,y;
        int x1,y1;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]!=-1)
                    count++;
                if(grid[i][j]==1)
                    {
                        x=i;
                        y=j;
                    }
            }
        }
         find(grid,0,x,y);
         return result;
    }
};