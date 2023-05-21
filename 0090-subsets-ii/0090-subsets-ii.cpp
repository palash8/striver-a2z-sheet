class Solution {
public:
    void solve(int index,vector<vector<int>>&ans,vector<int>&ds,vector<int>& nums)
    {
        ans.push_back(ds);
        for(int i=index;i<nums.size();i++)
        {
            if(i>index && nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            solve(i+1,ans,ds,nums);
            ds.pop_back();
        }
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        solve(0,ans,res,nums);
        return ans;
    }
};