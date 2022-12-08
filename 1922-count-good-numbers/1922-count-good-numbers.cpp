#define mod 1000000007
class Solution {
public:
    long long power(long long n,long long p)
    {
        if(p==0)return 1;
        long long ans=power(n,p/2);
        ans*=ans;
        ans%=mod;
        if(p%2==0)return ans%mod;
        else
            return (ans*n)%mod;
    }
    int countGoodNumbers(long long n) {
        long long even=n/2;
        long long odd=n-even;
        return(power(5,odd)*power(4,even))%mod;
        
    }
};