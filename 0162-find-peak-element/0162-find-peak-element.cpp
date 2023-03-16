class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int peak=0;
        if(r==0)
            return 0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid>0 and mid<nums.size()-1)
            {
              if(nums[mid]<nums[mid+1])
                l=mid+1;
              else if(nums[mid]<nums[mid-1])
                r=mid-1;
              else
              {
                 peak=mid;
                 break;
              }
            }
            else if(mid==0)
            {
                if(nums[mid]<nums[mid+1])
                    l=mid+1;
                else
               {
                 peak=mid;
                 break;
               }
            }
            else if(mid==nums.size()-1)
            {
                if(nums[mid]<nums[mid-1])
                    r=mid-1;
                else
                {
                  peak=mid;
                  break;
                }
            }
    
            
         }
        return peak;
    }
};