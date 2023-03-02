class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int n=nums.size();
        long long int totalsum=(n*(n+1))/2;
        long long int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        return totalsum-sum;
    }
};