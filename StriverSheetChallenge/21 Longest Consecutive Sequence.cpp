class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute force is to sort and count consecutive elementsn 
        //optimal
        unordered_set<int>myset;
        for(auto i:nums)
            myset.insert(i);
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(myset.find(nums[i]-1)==myset.end())
            {
                int ele=nums[i];
                int cnt=0;
                while(myset.find(ele)!=myset.end())
                {
                    cnt++;
                    ele++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
