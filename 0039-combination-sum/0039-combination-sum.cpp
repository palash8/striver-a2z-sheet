class Solution {
public:
    void find(vector<vector<int>>&ans,vector<int>&ds,int i,vector<int>&arr,int target)
    {
        if(i==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        //pickup element
        if(arr[i]<=target)
        {
            ds.push_back(arr[i]);
            find(ans,ds,i,arr,target-arr[i]);
            ds.pop_back();
        }
        find(ans,ds,i+1,arr,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        find(ans,ds,0,candidates,target);
        return ans;
        
    }
};