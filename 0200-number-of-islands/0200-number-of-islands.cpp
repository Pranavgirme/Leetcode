class Solution {
public:
    int m,n,count=0;
    void flood(int i,int j,vector<vector<char>>& grid)
    {
        if(grid[i][j]=='1')
        {
            grid[i][j]='2';
        }
        else
        {
            return;
        }
        if(i-1>=0) flood(i-1,j,grid);
        if(i+1<m) flood(i+1,j,grid);
        if(j-1>=0) flood(i,j-1,grid);
        if(j+1<n) flood(i,j+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    flood(i,j,grid);
                }
            }
        }
        return count;
    }
};