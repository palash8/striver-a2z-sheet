//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool hourcount(vector<int>&piles,int k,int h)
    {
        long long hours=0;
        for(int i:piles)
        {
            int div=i/k;
            hours+=div;
            if(i%k!=0)hours++;
        }
        return hours<=h;
    }
    int Solve(int N, vector<int>& piles, int h) {
        // Code here
        long long l=1,r=1000000000000;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(hourcount(piles,mid,h))
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends