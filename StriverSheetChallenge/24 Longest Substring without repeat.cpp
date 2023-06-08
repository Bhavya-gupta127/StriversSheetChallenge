class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //sliding window
        int i=0,j=0,ans=0,n=s.size();
        set<char>myset;
        for(i=0;i<n;i++)
        {
            while(myset.find(s[i])!=myset.end())
            {
                myset.erase(s[j++]);
            }
            myset.insert(s[i]);
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
