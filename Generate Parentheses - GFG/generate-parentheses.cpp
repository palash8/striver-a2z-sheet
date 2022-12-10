//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(vector<string>&v,string output,int open,int close)
    {
        //base case
        if(open==0&& close==0)
        {
            v.push_back(output);
            return;
        }
        //include open brackets
        if(open!=0)
        {
            string op1=output;
            op1.push_back('(');
            solve(v,op1,open-1,close);
        }
        //include closed brackets
        if(open<close)
        {
            string op2=output;
            op2.push_back(')');
            solve(v,op2,open,close-1);
        }
        return;
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>v;
        string output;
        int open=n;
        int close=n;
        solve(v,output,open,close);
        return v;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends