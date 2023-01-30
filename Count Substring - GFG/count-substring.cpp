//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
                int i=0,j=0,end=s.size()-1;
        unordered_map<char,int>map;
        int count=0;
        
        while(j!=s.size())
        {
            map[s[j]]++;//adding every element frequency
            
            while(map['a'] && map['b'] && map['c'])
            {
                count+=(end-j)+1;
                // removing first element[means shrinking window from front to form new window]
                map[s[i]]--;
                i++;
            }
            j++;
        }
        return count;
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
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends