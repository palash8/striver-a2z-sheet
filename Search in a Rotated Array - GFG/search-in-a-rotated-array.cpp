//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int nums[], int l, int r, int target){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int res=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                res=mid;
            if(nums[l]<=nums[mid])
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
        return res;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends