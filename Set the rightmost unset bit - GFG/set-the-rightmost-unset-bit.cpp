//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int getrightmostsetbitposition(int n)
    {
        return log2(n&-n)+1;
    }
    int setBit(int N)
    {
        // Write Your Code here
        if(N==0)
        return 1;
        else if((N&(N+1))==0)
        return N;
        else
        {
            int position=getrightmostsetbitposition(~N);
             return ((1<<(position-1))|N);
        }
        
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
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends