class Solution {
public:
    int SumOfDigits(long long m)
    {   int sum=0;
        int digits;
        while(m!=0)
        {
            digits=m%10;
            sum+=digits;
            m=m/10;
        }
     return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long mul = 1;
        long add = 0;
        while(SumOfDigits(n + add) > target)
        {
          mul = mul * 10;
          add = mul - n % mul;
        }
        return add;
        
        
    }
};