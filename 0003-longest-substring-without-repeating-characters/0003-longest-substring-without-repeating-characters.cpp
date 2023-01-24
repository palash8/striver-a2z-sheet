class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //optimized approach
        //map for storing current position of characters to find out repeating characters new position and to place next left
        vector<int>mpp(256,-1);
        
        int left=0,right=0;
        int len=0;
        int n=s.size();
        while(right<n)
        {
            if(mpp[s[right]]!=-1)
                left=max(left,mpp[s[right]]+1);
            
            mpp[s[right]]=right;
            
            len=max(right-left+1,len);
            right++;
        }
        return len;
        
    }
};