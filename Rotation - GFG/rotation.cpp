//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int l=0,r=n-1;
	    if(arr[l]<arr[r] || n==1)
	    return 0;
	    
	    while(l<=r)
	    {
	        int mid=(l+r)/2;
	        if(arr[mid]<arr[r])
	        {   
	            if(arr[mid]>arr[mid-1])
	            {
	               r=mid-1; 
	            }
	            else
	            return mid;
	        }
	        else
	        l=mid+1;
	   }
	   return r%n;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends