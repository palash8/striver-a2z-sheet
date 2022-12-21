class Solution {
public:
    bool isValid(string s) {
        stack<int>s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                s1.push(s[i]);
            else
            {
                if(s1.empty())
                    return false;
                char ch=s1.top();
                s1.pop();
                if((s[i]==')'&&ch=='(')||(s[i]==']'&&ch=='[')||(s[i]=='}'&&ch=='{'))
                {
                    
                }
                   
                else
                {
                  return false;
                } 
            }
        }
          if(s1.empty())
               return true;
          else
               return false;
        
    }
};