class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //optimized approach using unordered map
        unordered_map<int,int>map;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end() and i!=map[target-nums[i]])
            {
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
            }
             map[nums[i]]=i;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};