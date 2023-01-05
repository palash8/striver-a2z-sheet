//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool allprefix(string w,set<string>s)
    {
        for(int i=1;i<w.size();i++)
        {
            string sub=w.substr(0,i);
            if(!(s.find(sub)!=s.end()))
            {
               return false; 
            }
            
        }
        return true;
    }
    string longestString(vector<string> &words)
    {
        // code here
        set<string>s;
        for(string w:words)
        {
            s.insert(w);
        }
        string ans="";
        for(string w:words)
        {
            if(w.length()<ans.length())
            continue;
            else
            {
                if(allprefix(w,s))
                {
                    if(w.length()>ans.length())
                    ans=w;
                    else
                    {
                        if(w.compare(ans)<0)
                        ans=w;
                    }
                }
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends