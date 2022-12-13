class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(),mn=INT_MAX;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            a[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                {
                    a[i][j]=matrix[i][j]+min(a[i-1][j],a[i-1][j+1]);
                }
                else if(j==n-1)
                {
                    a[i][j]=matrix[i][j]+min(a[i-1][j],a[i-1][j-1]);
                }
                else
                {
                    a[i][j]=matrix[i][j]+min(a[i-1][j],min(a[i-1][j+1],a[i-1][j-1]));
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[n-1][i]<mn)
            {
                mn=a[n-1][i];
            } 
        }
        return mn;
    }
};