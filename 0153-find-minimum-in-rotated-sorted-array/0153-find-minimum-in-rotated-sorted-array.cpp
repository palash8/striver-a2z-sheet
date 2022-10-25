class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        nums[mid]>nums[end]?start=mid+1:end=mid;
    }
    return nums[start];
    
        
    }
};