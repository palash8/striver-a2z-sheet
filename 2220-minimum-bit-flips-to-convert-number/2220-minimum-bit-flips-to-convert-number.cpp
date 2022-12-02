class Solution {
public:
    int minBitFlips(int start, int goal) {
        int resultant=start^goal;
        //using brian kernigams algorithm to count set bits
        int bits_flipped=0;
        while(resultant>0)
        {
            resultant=(resultant&(resultant-1));
            bits_flipped++;
        }
        
      return bits_flipped;  
    }
};