class Solution {
public:
    void solve( vector<int>nums, vector<int>output,int i, vector<vector<int>>&ans)
    {
        //base case
        if(i>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,i+1,ans);
        
        //include
        int element=nums[i];
        output.push_back(element);
        solve(nums,output,i+1,ans);
  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
        
        
    }
};