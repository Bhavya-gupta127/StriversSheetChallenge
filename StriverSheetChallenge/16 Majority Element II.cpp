class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //brute force is to maintain map to see frequency of each array and iterate it to get all elements whose fz is greater than n/3 
        // 3 3 4 5 3 5 5 5 4 4

        //one similar approach is to sort the nums arr and count elemnts 

        //optimal appraoch is extention of moores voting algo 
        //intution is that there can be at most 2 elemtents which appears more than n/3 times
        int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
        for(auto i:nums)
        {
            if(cnt1==0 && ele2!=i)
            {
                cnt1++;
                ele1=i;
            }
            else if(cnt2==0 && ele1!=i)
            {
                cnt2++;
                ele2=i;
            }
            else if(ele1==i)
                cnt1++;
            else if(ele2==i)
                cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(auto i:nums)
        {
            if(ele1==i) 
                cnt1++;
            if(ele2==i)
                cnt2++;
        }
        int n=nums.size();
        vector<int>ans;
        if(cnt1>n/3)
            ans.push_back(ele1);
        if(cnt2>n/3)
            ans.push_back(ele2);
        return ans;
    }
};
