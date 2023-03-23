//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& nums, int target) {
        // Code here
        int l=0,r=N-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return true;
            if((nums[l]==nums[mid]) and (nums[mid]==nums[r]))
            {
                l++;
                r--;
            }
            else if(nums[l]<=nums[mid])
             {
                if(nums[l]<=target and target<=nums[mid])
                        r=mid-1;
                    else
                        l=mid+1;
              }
            else
            {
                if(nums[mid+1]<=target and target<=nums[r])
                        l=mid+1;
                 else
                        r=mid-1;
            }
            
        }
        return false;
        
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
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends