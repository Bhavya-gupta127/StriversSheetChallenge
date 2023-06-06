class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;
        for(auto i:nums)
        {
            cursum=max(i,cursum+i);
            maxsum=max(maxsum,cursum);
        }
        return maxsum;
        
    }
};
