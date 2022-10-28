class Solution {
public:
    bool check(vector<int>weights,int capacity,int d)
    {
        int wt=0,days_count=1,n=weights.size();
        for(int i=0;i<n;i++)
        {
            if(weights[i]>capacity)
                return false;
            wt+=weights[i];
            if(wt>capacity)
            {
                days_count++;
                wt=weights[i];
            }
        }
        if(days_count>d)
            return false;
        else
            return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0,n=weights.size();
        for(int i=0;i<n;i++)
        {
            high+=weights[i];
        }
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(weights,mid,days))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
                
        }
        return ans;
    }
};