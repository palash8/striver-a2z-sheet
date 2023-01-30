class Solution {
public:
    //solved by sliding window
    int numberOfSubarrays(vector<int>& v, int k) {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2)
                v[i]=1;
            else
                v[i]=0;
        }
        return atmostsum(v,k)-atmostsum(v,k-1);
     }
    int atmostsum(vector<int>&v,int k)
    {
        int i=0,j=0;
        int sum=0,result=0;
        while(j<v.size())
        {
            sum+=v[j];
            
            while(sum>k)
            {
                sum-=v[i];
                i++;
            }
            
            result+=j-i+1;
            j++;
        }
        return result;
    }
};