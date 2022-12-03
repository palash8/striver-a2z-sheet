//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int>a;
        int sum=0,res1=0,res2=0;
        for(int i=0;i<N;i++)
        {
            sum=sum^Arr[i];
        }
        int number=sum & (~(sum-1));
        for(int i=0;i<N;i++)
        {
            if((Arr[i]&number)!=0)
            {
             res1=res1^Arr[i];   
            }
            else
            {
             res2=res2^Arr[i];
            }
        }
        if(res1>=res2)
        {
          a.push_back(res1);
          a.push_back(res2);
        }
        else
        {
          a.push_back(res2);
          a.push_back(res1); 
        }
    
        return a;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends