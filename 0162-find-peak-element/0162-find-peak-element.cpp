class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1,count=0;
        if(n==1)
        {
            return 0;
        }
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(mid>0 && mid<n-1)
            {
                if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                {
                    count=mid;
                    break;
                }
                else if(nums[mid+1]>nums[mid-1])
                    l=mid+1;
                else
                    r=mid-1;
            }
            else if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                    return 0;
                 else
                    return 1;
            }
            else if(mid==n-1)
            {
              if(nums[mid]>nums[mid-1])
                    return n-1;
                else
                    return n-2;  
            }
                
        }
        return count;
        
    }
};