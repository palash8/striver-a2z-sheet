class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int length=s.size();
        char ch[128]={};
       for(int i=0;i<length;i++)
       {
           char c=s[i];
           if(!ch[c])
           {
               for(char s: ch)
               {
                   if(s==t[i])
                       return false;
               }
               ch[c]=t[i];
           }
           else if(ch[c]!=t[i])return false;
       }
        return true;
    }
};