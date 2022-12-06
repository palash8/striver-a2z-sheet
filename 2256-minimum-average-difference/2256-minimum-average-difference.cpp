class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long int sumfromfront=0,sumfromend=0;
        int index=0,average=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sumfromend+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            sumfromfront+=nums[i];
            sumfromend-=nums[i];
            int a=sumfromfront/(i+1);
            int b=(i==n-1)?0:sumfromend/(n-i-1);
            if(abs(a-b)<average)
            {
                average=abs(a-b);
                index=i;
            }
                
        }
       return index; 
    }
};