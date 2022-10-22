class Solution {
public:
    int search(vector<int>& nums, int target) {
    long long n=nums.size();
    long long low=0,high=n-1;
    long long index=-1;
        
        while(low<=high)
        {   long long mid=(low+high)/2;
            if(nums[mid]==target)
            {
               index=mid;
                 break; 
            } 
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
            
            
        }
        return index;
        
    }
};