class Solution {
public:
    bool totalhours(vector<int>piles,int k,int h)
    {
        int hours=0;
        for(int pile:piles)
        {
            int div=pile/k;
            hours+=div;
            if(pile%k!=0)hours++;
        }
        return hours>h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l=1;
        long long r=10000000000000;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(totalhours(piles,mid,h))
               l=mid+1 ;
            else
                r=mid-1;
        }
        return l;
    }
};