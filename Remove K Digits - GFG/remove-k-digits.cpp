//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>s;
        
        for(char c:num)
        {
            while(!s.empty() and k>0 and s.top()>c)
            {
                s.pop();
                k--;
            }
            if(!s.empty() || c!='0')
                s.push(c);
        }
        
        while(!s.empty() and k--)
            s.pop();
        if(s.empty())
            return "0";
        
        while(!s.empty())
        {
            num[n-1]=s.top();
            s.pop();
            n--;
        }
        return num.substr(n);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends