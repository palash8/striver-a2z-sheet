class Solution {
public:
    vector<int>headchar;
    
    int find(int x)
    {
        if(headchar[x]==-1)
            return x;
        return headchar[x]=find(headchar[x]);
    }
    void Union(int x,int y)
    {
        int parentx=find(x);
        int parenty=find(y);
        
        //parent same
        if(parentx==parenty)return;
        
        //otherwise make smaller one the parent of larger one
        headchar[max(parentx,parenty)]=min(parentx,parenty);
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        headchar.resize(26,-1);
        //make union
        for(int i=0;i<s1.size();i++)
        {
            Union(s1[i]-'a',s2[i]-'a');
        }
        for(auto i=0;i<baseStr.size();i++)
        {
            baseStr[i]=find(baseStr[i]-'a')+'a';
        }
        return baseStr;
    }
};