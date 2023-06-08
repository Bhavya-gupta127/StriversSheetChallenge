class Solution {
public:
    int merge(vector<int>&nums,int low,int mid,int high)
    {
        vector<int> temp;
        int p1=low;
        int p2=mid+1;
        int cnt=0;
        while(p1<=mid && p2<=high)
        {
            if((long long)nums[p1]>(long long)2*nums[p2])
            {
                cnt+=mid-p1+1;
                p2++;
            }
            else
                p1++;
        }

        int i=low;
        int j=mid+1;
        while(i<=mid && j<=high)
        {
            if(nums[i]<=nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }
        while(i<=mid)
            temp.push_back(nums[i++]);
        while(j<=high)
            temp.push_back(nums[j++]);

        for(j=0, i=low;j<temp.size();j++)
            nums[i++]=temp[j];
        return cnt;
    }
    int mergesort(vector<int>&nums,int low,int high)
    {
        if(low>=high)
            return 0;
        int mid=(low+high)/2;
        int cnt=0;
        cnt+=mergesort(nums,low,mid);
        cnt+=mergesort(nums,mid+1,high);
        cnt+=merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int cnt=mergesort(nums,0,nums.size()-1);
        for(auto i:nums)
            cout<<i<<" ";
        return cnt;
    }
};
