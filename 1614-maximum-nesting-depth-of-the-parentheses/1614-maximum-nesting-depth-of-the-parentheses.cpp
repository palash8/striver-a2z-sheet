class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int current_max=0;
        int updated_max=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                current_max++;
            else if(current_max>0 && s[i]==')')
                current_max--;
            updated_max=max(updated_max,current_max);
            
        }
       return updated_max;
        
    }
};