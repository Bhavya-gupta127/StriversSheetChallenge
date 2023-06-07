#include <bits/stdc++.h>

long long merge(long long *arr, int low, int mid, int high) {
  vector<int>temp;
  long long p1=low,p2=mid+1,cnt=0;
  while (p1 <= mid && p2 <= high) {
    if (arr[p1] <= arr[p2])
      temp.push_back(arr[p1++]);
    else {
        temp.push_back(arr[p2++]);
        cnt+=mid-p1+1;
    }
  }
  while(p1<=mid)
    temp.push_back(arr[p1++]);
  while(p2<=high)
    temp.push_back(arr[p2++]);

  for (int i = low; i <= high; i++) {
    arr[i]=temp[i-low];
  }
  return cnt;
}

long long mergesort(long long *arr, int low, int high) {
  long long cnt=0;
  if(low>=high)
    return cnt;
  int mid=(low+high)/2;
  cnt+=mergesort(arr,low,mid);
  cnt+=mergesort(arr,mid+1,high);
  cnt+=merge(arr,low,mid,high);
  return cnt;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    // Ex1
    // 2 5 1 3 4
    // 0 1 2 3 4 

    // 1 2 3 4 5
    // 2 0 3 4 1
    // 0 1 2 3 4

    //Ex2
    // 5 3 8 2 1
    // 0 1 2 3 4
    
    // 1 2 3 5 8
    // 4 3 1 0 2
    // 0 1 2 3 4 => 6
 
    // Ex3
    // 3 2 1
    // 0 1 2

    // 1 2 3
    // 2 1 0
    // 0 1 2
    //merge sort with some changes
    return mergesort(arr,0,n-1);

}
