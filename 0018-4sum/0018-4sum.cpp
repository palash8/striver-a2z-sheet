class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>>res;
       int n=nums.size();
        if(nums.empty())
        {
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {    long long target3=target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                long long target2=target3-nums[j];
                int left=j+1;
                int right=n-1;
                while(left<right)
                {
                    int sum=nums[left]+nums[right];
                    if(sum<target2)left++;
                    else if(sum>target2) right--;
                    else
                    {
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[left];
                        quadruplet[3] = nums[right];
                        res.push_back(quadruplet);
                        while(left<right && nums[left]==quadruplet[2])left++;
                        while(left<right && nums[right]==quadruplet[3])--right;
                    }
                    
                    
                }
                while(j+1<n && nums[j]==nums[j+1])
                ++j;
            }
            while(i+1<n && nums[i]==nums[i+1])
            ++i;
        }
       return res; 
    }
};