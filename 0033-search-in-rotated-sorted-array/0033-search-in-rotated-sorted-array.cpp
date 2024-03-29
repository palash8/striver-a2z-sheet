class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1;
        int res=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                res=mid;
            if(nums[l]<=nums[mid])
             {
                if(nums[l]<=target and target<=nums[mid])
                        r=mid-1;
                    else
                        l=mid+1;
              }
            else
            {
                if(nums[mid+1]<=target and target<=nums[r])
                        l=mid+1;
                 else
                        r=mid-1;
            }
            
        }
        return res;
    }
};