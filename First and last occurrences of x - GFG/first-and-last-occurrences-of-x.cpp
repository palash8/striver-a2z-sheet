//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

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

vector<int> find(int arr[], int n , int x )
{
    // code here
    int firstoccurence=firstocc(arr,n,x);
    int lastoccurence=lastocc(arr,n,x);
    
    vector<int>ans;
    ans.push_back(firstoccurence);
    ans.push_back(lastoccurence);
    
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends