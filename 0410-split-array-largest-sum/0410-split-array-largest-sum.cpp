class Solution {
public:
    int ispossiblesum(vector<int>nums,int mid)
    {
        int tempsum=0,count=1,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(tempsum+nums[i]<=mid)tempsum+=nums[i];
            else
            {
                count++;
                tempsum=nums[i];
            }
            
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=0,count=0,ans=0;
        for(int i=0;i<n;i++)
        {
            low=max(low,nums[i]);
            high+=nums[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            count=ispossiblesum(nums,mid);
            if(count<=k)
            {
                ans=mid;
                high=mid-1;
            } 
            else
                low=mid+1;
            
        }
        return ans;
        
    }
};