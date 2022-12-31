class Solution {
public:
    int dfs(vector<vector<int>>grid,int x,int y,int zero)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]==-1)
        {
            return 0;
        }
        if(grid[x][y]==2)
        {
            return zero==-1 ? 1 : 0;
        }
        grid[x][y]=-1;
        zero--;

        int total=dfs(grid,x,y+1,zero)+
                  dfs(grid,x+1,y,zero)+
                  dfs(grid,x,y-1,zero)+
                  dfs(grid,x-1,y,zero);

        grid[x][y]=0;
        zero++;

        return total;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int x,y,zero=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    zero++;
                }
                else if(grid[i][j]==1)
                {
                    x=i;
                    y=j;
                }
            }
        }
        return dfs(grid,x,y,zero);
    }
};