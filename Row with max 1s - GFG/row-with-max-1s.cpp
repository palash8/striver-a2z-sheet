//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int search(vector<int>arr)
    {
        int low=0,high=arr.size()-1,ans=arr.size();
        while(low<=high)
        {
           int mid=low+(high-low)/2;
           if(arr[mid]==1)
           {
            high=mid-1;
            ans=min(mid,ans);
            }
           else
           {
               low=mid+1; 
           }
        }   
        return ans;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    // code here
	    int index=-1,ans=0;
	    for(int i=0;i<n;i++)
	    {
	        int ix=search(arr[i]);
	        if(m-ix>ans)
	        {
	            ans=m-ix;
	            index=i;
	        }
	    }
	    return index;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends