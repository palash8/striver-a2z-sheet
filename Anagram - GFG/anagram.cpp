//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            return 0;
        }
        return 1;
    }
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int count1[26]={0};
        for(int i=0;i<a.size();i++)
        {
            char c=a[i];
            count1[c-'a']++;
        }
        int count2[26]={0};
        for(int i=0;i<a.size();i++)
        {
            char c=b[i];
            count2[c-'a']++;
        }
        if(checkequal(count1,count2) and a.size()==b.size())
        return true;
        return false;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends