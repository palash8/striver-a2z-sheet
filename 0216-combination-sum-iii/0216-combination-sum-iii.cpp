class Solution {
public:
    void solve(int index,int k,int n,vector<vector<int>>&ans,vector<int>&ds,int tempsum)
    {
        //base case
        if(k==0 && tempsum==n)
        {
            ans.push_back(ds);
            return;
        }
        if(tempsum>n)
            return;
        for(int i=index;i<=9;i++)
        {   if(i>n)break;
            ds.push_back(i);
            solve(i+1,k-1,n,ans,ds,tempsum+i);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(1,k,n,ans,ds,0);
        return ans;
    }
};