//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int>st;
        vector<int>a;
        for(int val:asteroids)
        {
            if(val>0)st.push(val);
            else
            {
                while(st.size()>0 && st.top()>0 && st.top()<-val)
                st.pop();
                if(st.size()>0 && st.top()>0 && st.top()==-val)
                st.pop();
                else if(st.size()>0 && st.top()>0 && st.top()>-val)
                {
                    
                }
                else
                st.push(val);
            }
        }
        int i=st.size()-1;
        while(i>=0)
        {   int b=st.top();
            st.pop();
            a.push_back(b);
            i--;
        }
        reverse(a.begin(),a.end());
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends