//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>v;
	    vector<int>::iterator ip;
        for(int i=2;i<=N;i++)
	    {
	        while(N%i==0)
	        {
	            v.push_back(i);
	            N/=i;
	        }
	        
	    }
	    ip = std::unique(v.begin(), v.end());
        v.resize(std::distance(v.begin(), ip));
	    return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends