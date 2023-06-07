class Solution {
public:
    //dp
    // int solve(int i,int j,int m,int n,vector<vector<int>>&dp)
    // {
    //     if(j<0 || i<0 || i>=m || j>=n)
    //         return 0;
    //     if(dp[i][j]!=-1)
    //         return dp[i][j];
    //     if(i==m-1 && j==n-1)
    //         return 1;
    //     return dp[i][j]=solve(i+1,j,m,n,dp)+solve(i,j+1,m,n,dp);
    // }
    // int uniquePaths(int m, int n) {
    //     vector<vector<int>>dp(m,vector<int>(n,-1));
    //     return solve(0,0,m,n,dp);
    // }

     int uniquePaths(int m, int n) {
        // optimised is using combinatorics:
        // We can note that length of all path will always be n+m-2 in this case 
        // our answer is 
        // n+m-2 
        //       C 
        //         n-1

        int girds = m+n-2;
        double paths=1;

        for(int i=1; i<=m-1; i++)
            paths = paths*(n-1+i)/i;
        
        return (int)paths;

     }
};
