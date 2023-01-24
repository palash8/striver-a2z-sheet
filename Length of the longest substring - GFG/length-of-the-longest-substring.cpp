//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        vector<int>mpp(256,-1);
        
        int left=0,right=0;
        int len=0;
        int n=s.size();
        while(right<n)
        {
            if(mpp[s[right]]!=-1)
                left=max(left,mpp[s[right]]+1);
            
            mpp[s[right]]=right;
            
            len=max(right-left+1,len);
            right++;
        }
        return len;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends