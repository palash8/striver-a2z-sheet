class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows==1)
            return s;
        string res="";
        int rows=0;
        for(rows=0;rows<numRows;rows++)
        {
            int increment=2*(numRows-1);
            for(int i=rows;i<s.size();i=i+increment)
            {
                res+=s[i];
                if(rows>0 and rows<numRows-1 and i+increment-2*rows<s.size())
                    res+=s[i+increment-2*rows];
            }
        }
        return res;
    }
};