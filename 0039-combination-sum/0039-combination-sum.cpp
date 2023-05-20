class Solution {
public:
    void solve(int i,vector<vector<int>>&ans,vector<int>&candidates,int target,vector<int>&res)
    {
        //base case
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(res);
            }
            return;
        }
        if(candidates[i]<=target)
        {
            res.push_back(candidates[i]);
            solve(i,ans,candidates,target-candidates[i],res);
            res.pop_back();
        }
        solve(i+1,ans,candidates,target,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        int n=candidates.size();
        solve(0,ans,candidates,target,res);
        return ans;
    }
};