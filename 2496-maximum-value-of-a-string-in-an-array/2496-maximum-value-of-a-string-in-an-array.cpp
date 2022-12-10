class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maximum=0;
        for(auto s:strs)
        {    int count=0;
            for(int j=0;j<s.size();j++)
            {
                
              if(s[j]<'0'|| s[j]>'9')
              {
                count=s.size();
                    break;  
              }
                count=count*10+s[j]-'0';
            }
            maximum=max(count,maximum);
        }
        return maximum;
        
    }
};