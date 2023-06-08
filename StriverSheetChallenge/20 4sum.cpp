class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // (200)^4= 16*1e8= 1.6*1e9 // tle
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // -2 -1 0 0 1 2
        set<vector<int>>myset;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //from j+1 to n i have to find 2 ele whose sum is equal to target-nums[i]-nums[j]
                int left=j+1;
                int right=n-1;
                long long newtarget=(long long)target-(long long)(nums[i]+nums[j]);
                while(left<right)
                {
                    if(nums[left]+nums[right]==newtarget)
                    {
                        myset.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }
                    else if(nums[left]+nums[right]<newtarget)
                        left++;
                    else
                        right--;
                }
            }
        }
        vector<vector<int>>ans(myset.begin(),myset.end());
        return ans;
    }
};
