class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(long long)m*k)
            return -1;
        int n=bloomDay.size();
        int mi=INT_MAX;
        int ma=INT_MIN;
        for(int d:bloomDay)
        {
            mi=min(mi,d);
            ma=max(ma,d);
        }
        int curr,adj,mid;
        while(mi<ma)
        {
            mid=(mi+ma)/2;
            curr=0,adj=0;
            for(int i=0;i<n;i++)
            {
                if(bloomDay[i]>mid)adj=0;
                else
                {   adj++;
                    if(adj==k)
                    {
                        adj=0;
                        curr++;
                    }
                }
                if(curr>=m)break;
            }
            if(curr<m)mi=mid+1;
            else
                ma=mid;
        }
       return mi; 
    }
};