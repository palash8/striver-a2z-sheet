class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>res;
        solve(0,s,ans,res);
        return ans;
    }
    void solve(int index,string s,vector<vector<string>>&ans, vector<string>&res)
    {
        //base case
        if(index==s.size())
        {
            ans.push_back(res);
            return;
        }
        for(int i=index;i<s.size();++i)
        {
            if(ispalindrome(s,index,i))
            {
                res.push_back(s.substr(index,i-index+1));
                solve(i+1,s,ans,res);
                res.pop_back();
            }
        }
    }
    bool ispalindrome(string s,int start,int end)
    { 
       while(start<=end)
       {
        if(s[start++]!=s[end--])
            return false;
       }
        return true;
    }
};