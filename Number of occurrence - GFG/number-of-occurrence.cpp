//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
int firstocc(int arr[], int n , int x )
{
    int l=0,r=n-1;
    int res=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        {
            res=mid;
            r=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        r=mid-1;
    }
    return res;
}
int lastocc(int arr[], int n , int x )
{
    int l=0,r=n-1;
    int res=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        {
            res=mid;
            l=mid+1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        r=mid-1;
    }
    return res;
}
	int count(int arr[], int n, int x) 
	{
	    // code here
	    int f=firstocc(arr,n,x);
        int l=lastocc(arr,n,x);
        if(l==-1 || f==-1)
        return 0;
        return l-f+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends