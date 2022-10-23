class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int l=0,r=n,count=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                count=mid;
                 break;
            } 
            else if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target&&target<=nums[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(target>=nums[mid] && target<=nums[r])
                    l=mid+1;
                else
                    r=mid-1;
                
            } 
                
        }
        return count;
        
    }
};