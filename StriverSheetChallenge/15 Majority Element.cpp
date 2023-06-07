class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //brute force => map to store frequency of each array linear time and space
        //to optimise space
        int fz=1;
        int ele=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            if(ele==nums[i])
                fz++;
            else
            {
                fz--;
                if(fz==0)
                {
                    fz=1;
                    ele=nums[i];
                }
            }
        }
        return ele;
    }
};
