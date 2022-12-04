class Solution {
public:
   /* string converttouppercase(string s)
    {
        char ch;
        for(int i=0;i<s.size();i++)
        {    ch=s[i];
            s[i]=toupper(ch);
        }
        return s;
    }*/
    bool isCircularSentence(string s) {
       /* string s=converttouppercase(sentence);*/
        int n=s.size();
        if(s[0]!=s[n-1])return false;
        
        for(int i=1;i<=n-2;i++)
        {
            if(s[i]==' ' && s[i-1]!=s[i+1])
                return false;
        }
        return true;
        
    }
};