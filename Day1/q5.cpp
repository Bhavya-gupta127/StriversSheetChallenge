class Solution {
public:
    void sortColors(vector<int>& nums) {
        //bubble sort
        for(int i=0;i<nums.size();i++)
        {
            for(int j=1;j<nums.size();j++)
            {
                if(nums[j]<nums[j-1])   
                    swap(nums[j],nums[j-1]);
            }
        }
    }
};
