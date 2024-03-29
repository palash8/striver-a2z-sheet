//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
        // code here
        int left[n],right[n];
        long long sum=0;
        
        //first we calculate left side height
        left[0]=height[0];
        for(int i=1;i<n;i++)
        {
           left[i]=max(height[i],left[i-1]); 
        }
        
        //then we calculate right side height
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
           right[i]=max(height[i],right[i+1]); 
        }
        
        //total water stored
        for(int i=0;i<n;i++)
        {
           sum+=(min(left[i],right[i])-height[i]);
        }
        
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends