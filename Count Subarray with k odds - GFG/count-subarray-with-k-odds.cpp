//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& v, int k) {
        // Code here
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2)
                v[i]=1;
            else
                v[i]=0;
        }
        return atmostsum(v,k)-atmostsum(v,k-1);
     }
    int atmostsum(vector<int>&v,int k)
    {
        int i=0,j=0;
        int sum=0,result=0;
        while(j<v.size())
        {
            sum+=v[j];
            
            while(sum>k)
            {
                sum-=v[i];
                i++;
            }
            
            result+=j-i+1;
            j++;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends