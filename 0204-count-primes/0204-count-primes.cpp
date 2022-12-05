class Solution {
public:
    bool isprimenumber(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return true;
        }
        return false;
    }
    int countPrimes(int n) {
        if(n==0||n==1)
            return 0;
        int count=0;
        vector<bool>isprime(n+1,true);
        for(int i=2;i*i<=n;i++)
        {
            if(isprime[i])
            {    
                for(int j=2*i;j<=n;j=j+i)
                    isprime[j]=false;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(isprime[i])
                count++;
        }
        if(isprimenumber(n))
            return count;
        else
            return count-1;
        
        
    }
};