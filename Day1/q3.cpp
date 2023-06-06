class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int prev=nums.back();
        int i,j,n=nums.size();
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]>=prev)
                prev=nums[i];
            else
                break;
        }
        //if no next permutation 
        if(i<0)
        {
            //sorted arr
            for(int k=0;k<n;k++)
            {
                for(j=1;j<n;j++)
                {
                    if(nums[j]<nums[j-1])
                        swap(nums[j],nums[j-1]);
                }
            }
            return;
        }
        //find upperbound of nums[i] in range i+1 to n say it is at index j
        for(j=n-1;j>=i+1;j--)
        {
            if(nums[j]>nums[i])
            {
                //swap(nums[i],nums[j])
                swap(nums[j],nums[i]);
                break;
            }
        }
        cout<<nums[i]<<"\n";
        
        //sort the range i+1 to n
        for(int k=i+1;k<n;k++)
        {
            for(j=i+2;j<n;j++)
            {
                if(nums[j]<nums[j-1])
                    swap(nums[j],nums[j-1]);
            }
        }
              
    }
};
