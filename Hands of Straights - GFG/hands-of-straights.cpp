//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
         //created a ordered map to store sorted value->frequency
        map<int,int>mp;
        for(int x:hand)
            mp[x]++;
        
        //checking in map
        
        for(auto it:mp)
        {
            //ignoring elements with 0 frequency
            if(mp[it.first]>0)
            {
                //checking consecutive elements for a particular group
                for(int i=1;i<groupSize;i++)
                {
                    //deleting frequency for x+1,x+2 seeing the frequency of x
                    mp[it.first+i]-=mp[it.first];
                    //if anytime the frequency of x+1,x+2 becomes zero return false
                    if(mp[it.first+i]<0)
                        return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends