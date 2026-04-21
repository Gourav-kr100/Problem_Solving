class Solution {
public:
     int x[4]={0,0,1,-1};
    int y[4]={1,-1,0,0};
    bool valid(int i,int j,int m,int n)
    {
        if(i<0 || i>=m || j<0 || j>=n)
            return false;
        return true; 
    }
    void dfs(int a,int b,vector<vector<char>>&board,vector<vector<int>>&visited,int m,int n)
    {
        visited[a][b]=1;
        board[a][b]='*';

        for(int k=0;k<4;k++)
        {
          int a1=a+x[k];
           int b1=b+y[k];
            if(valid(a1,b1,m,n) && board[a1][b1]=='O' && visited[a1][b1]==0)
                dfs(a1,b1,board,visited,m,n);
        }
        return;
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>visited(m, vector<int>(n, 0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==0 || i==m-1 || j==n-1)
                {
                    if(board[i][j]=='O')
                        dfs(i,j,board,visited,m,n);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='*')
                    board[i][j]='O';
               else if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
    }
};