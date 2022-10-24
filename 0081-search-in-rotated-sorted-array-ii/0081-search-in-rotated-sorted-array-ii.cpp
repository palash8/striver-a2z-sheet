class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
               return true;
            }
            else if(nums[mid]==nums[l] && nums[l]==nums[r])
            {
                l=l+1;
                r=r-1;
            }
            else if(nums[l]<=nums[mid])
            {    if(nums[l]<=target && nums[mid]>target)
                  r=mid-1;
                 else
                    l=l+1;   
            }
            else 
            {   if(nums[r]>=target && nums[mid]<target)
                l=mid+1;
                else
                    r=mid-1;
            }
        }
        return false;
       

        
    }
};