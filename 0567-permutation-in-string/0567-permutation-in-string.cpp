class Solution {
private:
    bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //for storing characters present in s1 string
        int count1[26]={0};
    
        for(int i=0;i<s1.length();i++)
        {
            count1[s1[i]-'a']++;
        }
        //for storing windowsize characters of s2
        int j=0;
        int count2[26]={0};
        int windowsize=s1.length();
        while(j<s2.length()&& j<windowsize)
        {
            count2[s2[j++]-'a']++;
        }
        //for 1st window
        if(checkequal(count1,count2))
            return true;
        //for the rest of the window
        while(j<s2.length())
        {
            count2[s2[j]-'a']++;
            count2[s2[j-windowsize]-'a']--;
            j++;
            if(checkequal(count1,count2))
            return true;
                
                
        }
            
        return false;
    }
};