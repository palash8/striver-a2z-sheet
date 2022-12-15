class Solution {
public:
    void solve(int n, vector<string> &ans, string options[], string output){
        if(n==0){
            ans.push_back(output);
            return;
        }
        int n1=n%10;
        string s1=options[n1];
        for(int j=0;j<s1.length(); j++)
            solve(n/10, ans, options, s1[j]+output);
    }
    
    vector<string> letterCombinations(string digits) {
        int sum=0;
        for(int i=0;i<digits.length();i++)
        {
            sum=sum*10+(digits[i]-'0');
        }
        vector<string> ans;
        if(digits.length() == 0)
            return ans;
        string options[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(sum, ans, options, "");
        return ans;
    }
};
