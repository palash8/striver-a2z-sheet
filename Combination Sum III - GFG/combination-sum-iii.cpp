//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
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
    vector<vector<int>> combinationSum(int k, int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>res;
        solve(1,ans,res,k,n,0);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends