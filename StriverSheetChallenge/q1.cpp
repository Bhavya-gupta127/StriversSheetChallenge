class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=1;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    if(j==0)
                        col=0;
                    else
                        matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=m-1;j>=0;j--)
        {
            if(matrix[0][0]==0)
                matrix[0][j]=0;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(col==0)
                matrix[i][0]=0;
        }
    }
};
