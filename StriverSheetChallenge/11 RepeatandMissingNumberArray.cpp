#include<bits/stdc++.h>
vector<int> Solution::repeatedNumber(const vector<int> &A) {
  long long d,m,sum=0,sum2=0,n=A.size();
  for(int i=0;i<n;i++)
  {
      sum+=A[i];
      sum2+=(long long)A[i]*(long long)A[i];
  }
  long long d_minus_m=sum-n*(n+1)/2;
  long long d2_minus_m2=sum2-n*(n+1)*(2*n+1)/6;
  long long d_plus_m=d2_minus_m2/d_minus_m;
  d=(d_minus_m+d_plus_m)/2;
  m=d_plus_m-d;
  return {(int)d,(int)m};
    
}
