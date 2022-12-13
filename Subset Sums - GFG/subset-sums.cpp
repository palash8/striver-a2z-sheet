//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int>&arr,int n,int i,vector<int>&sum,int tempsum)
    {
        //base case
        if(i>=arr.size())
        {
            sum.push_back(tempsum);
            return;
        }
        //recurssion
        solve(arr,n,i+1,sum,tempsum+arr[i]);
        solve(arr,n,i+1,sum,tempsum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>sum;
        solve(arr,N,0,sum,0);
        sort(sum.begin(),sum.end());
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends