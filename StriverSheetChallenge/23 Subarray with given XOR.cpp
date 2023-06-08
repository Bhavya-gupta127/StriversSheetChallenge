int Solution::solve(vector<int> &A, int B) {
    map<int,int>mp;
    mp[0]++;
    int ans=0;
    int xr=0;
    for(int i=0;i<A.size();i++)
    {
        xr=xr^A[i];
        ans+=mp[xr^B];
        mp[xr]++;
    }
    return ans;
}
