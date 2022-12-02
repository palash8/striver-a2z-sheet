//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
         //XOR operation results in the number of different bits in both the numbers
        int resultant=a^b;
        //using brian kernigams algorithm to count set bits
        int bits_flipped=0;
        while(resultant>0)
        {
            resultant=(resultant&(resultant-1));
            bits_flipped++;
        }
        
      return bits_flipped;  
        
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}
// } Driver Code Ends