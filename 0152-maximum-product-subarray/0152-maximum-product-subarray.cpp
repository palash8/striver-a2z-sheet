class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long maxp=INT_MIN,product =1;
        long long n=nums.size();
        for(int i=0;i<n;i++)
        {    
            product*=nums[i];
            maxp=max(maxp,product);
            if(product==0)
            product=1;
        }
        product=1;
        for(int i=n-1;i>=0;i--)
        {    
            product*=nums[i];
            maxp=max(maxp,product);
            if(product==0)
            product=1;
        }
     return maxp;
    }
    
};