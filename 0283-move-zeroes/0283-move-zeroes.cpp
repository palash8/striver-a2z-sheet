class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        //Method 1
      /*  int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }*/
        //Method 2
        stable_partition(nums.begin(),nums.end(),[](int i){return i;});
        
    }
};