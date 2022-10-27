class Solution {
public:
    int getsum(vector<int>nums,int h,int k)
    {
        int n=nums.size();
         int sum=0;
        for(int d:nums)
        {
           
            if(d%h==0)
                sum=sum+(d/h);
            else
                sum=sum+(d/h)+1;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=1000000;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int val=getsum(nums,mid,threshold);
            if(val>threshold)
                l=mid+1;
            else
                r=mid-1;
        }
      return l;  
    }
};