//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        
        int n=s.size();
        int m=t.size();
        if(m!=n)
        return false;
        char a[128]={};
        
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(!a[c])
            {
                for(char k:a)
                {
                    if(k==t[i])
                    return false;
                }
                a[c]=t[i];
            }
            else if(a[c]!=t[i])
            {
                return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends