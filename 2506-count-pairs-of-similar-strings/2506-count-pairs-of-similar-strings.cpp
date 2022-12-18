class Solution {
public:
    bool findstrings(string s1,string s2)
    {
        unordered_set<char>c1;
        unordered_set<char>c2;
        bool val1=true,val2=true;
        for(int i=0;i<s1.length();i++)
            c1.insert(s1[i]);
        for(int i=0;i<s2.length();i++)
            c2.insert(s2[i]);
        for(int j=0;j<s1.length();j++)
         {
            if(c2.find(s1[j])==c2.end())
            {
                val1=false;
                return false;
            }  
         }
         for(int j=0;j<s2.length();j++)
          {
            if(c1.find(s2[j])==c1.end())
            {
                val2=false;
                return false;
            }
           } 
         
      return (val1 && val2);          
    }
    int similarPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {    string s1=words[i];
            for(int j=i+1;j<words.size();j++)
            {
                string s2=words[j];
                if(s1!=s2 && s1.length()!=1 && s2.length()!=1)
                {
                    if(findstrings(s1,s2))
                        count++;
                }
                if(s1.length()==1 && s2.length()==1)
                    count++;
            }
        }
       return count; 
        
    }
};