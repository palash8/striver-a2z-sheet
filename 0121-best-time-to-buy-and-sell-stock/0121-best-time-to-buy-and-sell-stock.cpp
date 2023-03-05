class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimal=prices[0],profit=0,ans=0;
        for(int i=1;i<prices.size();i++)
        {
            minimal=min(minimal,prices[i]);
            profit=prices[i]-minimal;
            ans=max(ans,profit);
        }
       return ans; 
    }
};