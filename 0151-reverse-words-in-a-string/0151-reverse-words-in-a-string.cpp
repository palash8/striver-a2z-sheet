class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        stringstream str(s);
        string temp;
        string ans;
        while(str>>temp)
            words.push_back(temp);
        for(int i=words.size()-1;i>=0;--i)
        {
            if(i!=words.size()-1)
                ans+=" ";
            ans+=words[i];
        }
        return ans;
        
        
    }
};