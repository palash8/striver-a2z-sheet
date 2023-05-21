class Solution {
public:
    void solve(int index,vector<int>&res,vector<vector<int>>&ans,vector<int>&arr,int target)
    {
        //base case
        if(target==0)
        {
            ans.push_back(res);
            return;
        }
        //pickup all rest of the elements with help of loop
        for(int i=index;i<arr.size();i++)
        {
            if(i>index && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            res.push_back(arr[i]);
            solve(i+1,res,ans,arr,target-arr[i]);
            res.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>res;
        solve(0,res,ans,candidates,target);
        return ans;
    }
};