class Solution {
public:
    int countOdds(int low, int high) {
        //if even then
        int val=high-low+1;
        if(val%2==0)
            return val/2;
        else
            if(low%2==0)
                return val/2;
            else
                return val/2+1;
        
        
    }
};