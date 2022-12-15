class Solution {
public:
    void solve(string digits, vector<string> &ans, string options[], int i, string output){
        if(i == digits.length()){
            ans.push_back(output);
            return;
        }
        string s1 = options[digits[i] - '0'];
        for(int j=0;j<s1.length(); j++)
            solve(digits, ans, options, i+1, output+s1[j]);
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0)
            return ans;
        string options[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, ans, options, 0, "");
        return ans;
    }
};
