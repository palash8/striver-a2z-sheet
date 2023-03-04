class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int major=nums[0];
        int count=1;
        //in this we are trying to go with adding count of one value and if another value comes we subtract the count at last the majority element will be left
        
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
            {
                major=nums[i];
                count++;
            }
            else if(major==nums[i])
                count++;
            else
                count--;
        }
        return major;
    }
};