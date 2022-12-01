class Solution {
public:
    bool count_vowel(char ch)
    {
        ch=toupper(ch);
        return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
    }
    bool halvesAreAlike(string s) {
        int n=s.length();
        int count1=0,count2=0;
        for(int i=0;i<n/2;i++)
        {
            if(count_vowel(s[i]))
                count1++;
        }
        for(int i=n/2;i<n;i++)
        {
             if(count_vowel(s[i]))
                count2++;
        }
        if(count1==count2)
            return true;
        return false;
    }
};