class Solution {
public:
    //aditya verma approach ,solve uptil input/nums become empty
    void solve( vector<int>nums, vector<int>output, vector<vector<int>>&ans)
    {
        
        //base case
        if(nums.size()==0)
        {
            ans.push_back(output);
            return;
        }
        vector<int>output1=output;
        vector<int>output2=output;
        //include
        output2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,output2,ans);
        
        //exclude
        solve(nums,output1,ans);
        return;
  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        solve(nums,output,ans);
        return ans;
        
        
    }
};