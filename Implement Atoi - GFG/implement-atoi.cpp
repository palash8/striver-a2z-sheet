//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
        //Your code here
        bool flag = false;
        if(str[0]=='-'){
            flag = true;
            str = str.substr(1,str.size()-1);
        }
        int num=0;
        for(auto it:str){
            if((it-'0')>=0 && (it-'0')<=9){
                num = num*10+(it-'0');
            }
            else{
                return -1;
            }
        }
        if(flag){
            return num*-1;
        }
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends