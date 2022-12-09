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
      /*  vector<int>output1=output;
        vector<int>output2=output;*/
        int element=nums[0];
        nums.erase(nums.begin()+0);
        //exclude
        solve(nums,output,ans);
        //include
        output.push_back(element);
        solve(nums,output,ans);
        return;
  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        solve(nums,output,ans);
        return ans;
        
        
    }
};