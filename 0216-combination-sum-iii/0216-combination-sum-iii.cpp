class Solution {
public:
    void solve(int index, vector<vector<int>>&ans,vector<int>&res,int k,int n,int tempsum)
    {
        //base case
        if(k==0 and tempsum==n)
        {
            ans.push_back(res);
            return;
        }
        if(tempsum>n)
            return;
        for(int i=index;i<=9;i++)
        {
            if(i>n)break;
            res.push_back(i);
            solve(i+1,ans,res,k-1,n,tempsum+i);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>res;
        solve(1,ans,res,k,n,0);
        return ans;
    }
};