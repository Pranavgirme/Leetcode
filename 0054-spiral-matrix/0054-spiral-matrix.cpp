class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.size()==0)
        {
            return ans;
        }
        int row_st=0,row_end=matrix.size()-1;
        int col_st=0,col_end=matrix[0].size()-1;
        int i;
        while(row_st<=row_end && col_st<=col_end)
        {
            for(i=col_st;i<=col_end;i++)
            {
                ans.push_back(matrix[row_st][i]);
            }
            row_st++;
            if(row_st>row_end) break;
            for(i=row_st;i<=row_end;i++)
            {
                ans.push_back(matrix[i][col_end]);
            }
            col_end--;
            if(col_st>col_end) break;
            for(i=col_end;i>=col_st;i--)
            {
                ans.push_back(matrix[row_end][i]);
            }
            row_end--;
            if(row_st>row_end) break;
            for(i=row_end;i>=row_st;i--)
            {
                ans.push_back(matrix[i][col_st]);
            }
            col_st++;
            if(col_st>col_end) break;
        }
        return ans;
    }
};