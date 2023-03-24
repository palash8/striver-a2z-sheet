class Solution {
public:
    bool hourcount(vector<int>&piles,int k,int h)
    {
        long long hours=0;
        for(int i:piles)
        {
            int div=i/k;
            hours+=div;
            if(i%k!=0)hours++;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles,int h) {
        long long l=1,r=1000000000000;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(hourcount(piles,mid,h))
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
        
    }
};