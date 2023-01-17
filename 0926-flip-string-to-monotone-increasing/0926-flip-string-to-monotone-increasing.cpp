class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int countflip=0;
        int countone=0;
        for(auto i:s)
        {
            if(i=='1')
                countone++;
            else
            {
                countflip=min(++countflip,countone);
            }
        }
        
      return countflip;  
    }
};