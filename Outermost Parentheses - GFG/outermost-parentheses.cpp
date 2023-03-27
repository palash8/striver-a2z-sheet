//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        stack<char>st;
        string ans="";
        
        //outermost parenthisis are the ones that are left at the end of the stack or if we could           //say as size becomes 1
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(st.size()>0)
                    ans.push_back(s[i]);
                st.push(s[i]);
            }
            else
            {
                st.pop();
                if(st.size()>0)
                    ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends