//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        sort(arr,arr+n);
        string ans="";
        if(n==0)
        {
            return ans;
        }
        string a=arr[0];
        string b=arr[n-1];
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==b[i])
            {
                ans+=a[i];
            }
            else
            break;
        }
        if(ans.empty())
        return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends