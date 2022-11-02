class Solution {
public:
    bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
    bool isAnagram(string s, string t) {
        int count1[26]={0};
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            count1[ch-'a']++;
        }
        int count2[26]={0};
        for(int i=0;i<t.size();i++)
        {
            char ch=t[i];
            count2[ch-'a']++;
        }
        if(checkequal(count1,count2) && s.size()==t.size())
            return true;
        else
            return false;
        
    }
};