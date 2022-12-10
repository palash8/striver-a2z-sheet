class Solution {
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
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        string output;
        int open=n;
        int close=n;
        solve(v,output,open,close);
        return v;
        
    }
};