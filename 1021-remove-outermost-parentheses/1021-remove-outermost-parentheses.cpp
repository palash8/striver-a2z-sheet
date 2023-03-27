class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";
        
        //outermost parenthisis are the ones that are left at the end of the stack or if we could           //say as size becomes 1
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(st.size()>0)
                    ans.push_back(s[i]);
                st.push(s[i]);
            }
            else
            {
                st.pop();
                if(st.size()>0)
                    ans.push_back(s[i]);
            }
        }
        return ans;
    }
};