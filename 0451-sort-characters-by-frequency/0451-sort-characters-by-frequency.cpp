class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m1;
        multimap<int,char,greater<int>>m2;
        int i=0,j=0;
        for(i=0;i<s.size();i++)
        {
            m1[s[i]]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            m2.insert({it->second,it->first});
        }
        for(auto jt=m2.begin();jt!=m2.end();jt++)
        {
            for(i=0;i<jt->first;i++)
                s[j++]=jt->second;
        }
        return s;
        
        
        
    }
};