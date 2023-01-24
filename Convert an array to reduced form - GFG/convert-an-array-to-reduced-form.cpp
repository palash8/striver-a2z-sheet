//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    int temp=0;
	    map<int,int>mp;
	    int brr[n];
	    for(int i=0;i<n;i++)
	    {
	        brr[i]=arr[i];
	    }
	    sort(brr,brr+n);
	    for(int i=0;i<n;i++)
	    {
	       if(mp[brr[i]]==0)
	       {
	           mp[brr[i]]=temp;
	           temp++;
	       }
	    }
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=mp[arr[i]];
	    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends