//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        //prefix sum and kadane algorithm
        unordered_map<int,int>map;
        int maxi=0,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum==0)
            {
                maxi=i+1;
            }
            else if(map.find(sum)!=map.end())
            {
                maxi=max(maxi,i-map[sum]);
            }
            else
            {
                map[sum]=i;
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends