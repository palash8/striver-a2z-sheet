//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &nums,int n){
           //code here
           int ans=0;
        
        for(int i=0;i<n;)
        {
            int start=i;
            
            while(start<n and nums[start]==0)
                start++;
            
            int end=start;
            int count=0;
            int StartNegative=-1,EndNegative=-1;
            
            while(end<n and nums[end]!=0)
            {
                if(nums[end]<0)
                {
                    count++;
                    if(StartNegative==-1)
                        StartNegative=end;
                    EndNegative=end;
                 }
                end++;
            }
            if(count%2==0)
                ans=max(ans,end-start);
            else
            {
                if(StartNegative != -1)
                    ans=max(ans,end-StartNegative-1);
                if(EndNegative != -1)
                    ans=max(ans,EndNegative-start);
            }
            i=end+1;
        }
       return ans;    
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends