class Solution {
public:
    void sortColors(vector<int>& nums) {

        //dutch national flag algo
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            switch (nums[mid])
            {
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }

        //bubble sort
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=1;j<nums.size();j++)
        //     {
        //         if(nums[j]<nums[j-1])   
        //             swap(nums[j],nums[j-1]);
        //     }
        // }
    }
};
