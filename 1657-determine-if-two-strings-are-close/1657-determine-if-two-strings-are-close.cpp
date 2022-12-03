class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int count=0;
        if(word1.size()==word2.size())
        {
            map<char,int>s1;
            map<char,int>s2;
            set<int>l2,l1;
            vector<int>v2,v1;
            
            for(int i=0;i<word1.size();i++)
            {
                l1.insert(word1[i]);
                s1[word1[i]]++;
            }
            for(int i=0;i<word2.size();i++)
            {
                l2.insert(word2[i]);
                s2[word2[i]]++;
            }
            for(auto [k,v]:s1)v1.push_back(v);
             for(auto [k,v]:s2)v2.push_back(v);
            
            sort(v1.begin(),v1.end());
              
            sort(v2.begin(),v2.end());
            
            if(v1==v2 && l1==l2)
                return true;
          
        }
        return false;
    }
};