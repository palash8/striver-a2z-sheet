class Solution {
public:
    int maxDepth(string s) {
        int currentmax=0;
        int updatedmax=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                currentmax++;
            else if(s[i]==')')
                currentmax--;
            updatedmax = max(currentmax,updatedmax);
        }
        return updatedmax;
    }
};