class Solution {
public:
    int getMaxLen(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=0;
        
        for(int i=0;i<n;)
        {
            int start=i;
            
            while(start<n and nums[start]==0)
                start++;
            
            int end=start;
            int count=0;
            int StartNegative=-1,EndNegative=-1;
            
            while(end<n and nums[end]!=0)
            {
                if(nums[end]<0)
                {
                    count++;
                    if(StartNegative==-1)
                        StartNegative=end;
                    EndNegative=end;
                 }
                end++;
            }
            if(count%2==0)
                ans=max(ans,end-start);
            else
            {
                if(StartNegative != -1)
                    ans=max(ans,end-StartNegative-1);
                if(EndNegative != -1)
                    ans=max(ans,EndNegative-start);
            }
            i=end+1;
        }
       return ans;         
    }
};