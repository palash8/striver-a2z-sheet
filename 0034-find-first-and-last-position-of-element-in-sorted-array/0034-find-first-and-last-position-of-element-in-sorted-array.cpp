class Solution {
public:
    
    int fo(vector<int>nums,int target)
    {
        int l=0,r=nums.size()-1,ans=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return ans;
    }
     int lo(vector<int>nums,int target)
    {
        int l=0,r=nums.size()-1,ans=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>a;
        int a1=fo(nums,target);
        int a2=lo(nums,target);
        a.push_back(a1);
         a.push_back(a2);
        return a;
        
     }
};