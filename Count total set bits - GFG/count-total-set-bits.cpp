//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int largest_2x(int n)
    {
        int x=0;
        while((1<<x)<=n)
        x++;
        return x-1;
    }
    int countSetBits(int n)
    {
        // Your logic here
       if(n==0)
       return 0;
       //find the largest power of 2 less than n
       int x=largest_2x(n);
       //now when we got largest power 2 we have to find set bits in the numbers from 0 to largest
       //power of 2 leass than x,that can be done by formula 2^(x-1)*x;
       int stterm=(1<<(x-1))*x;
       //now for calculatinf for left numbers we get that by below formula just for leftmost bits
       int ndterm=n-(1<<x)+1;
       //now if we apply  this we remove the leftmost and check for remaining numbers
       int ans=stterm+ndterm+countSetBits(ndterm-1);
       return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends