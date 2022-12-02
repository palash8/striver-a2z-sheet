class Solution {
public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
        if(dividend == 1<<31 && divisor == -1)return INT_MAX;
        int sign=(dividend>=0 ^ divisor>=0)?-1:1;
        dividend=abs(dividend);
        divisor=abs(divisor);
        long long quotient=0;
        long long temp=0;
        for(int i=31;i>=0;--i)
        {
            if(temp+(divisor<<i)<=dividend)
            {
                temp+=(divisor<<i);
                quotient+=1LL<<i;
            }
        }
        return sign*quotient;
    }
};