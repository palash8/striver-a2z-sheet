//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    // code here
    pair<int,int>p;
    int maxi=-1,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x)
        maxi=max(maxi,arr[i]);
        if(arr[i]>=x)
        mini=min(mini,arr[i]);
        
    }
    p.first=maxi;
    if(mini==INT_MAX)
    p.second=-1;
    else
    p.second=mini;

    
    return p;
        
}