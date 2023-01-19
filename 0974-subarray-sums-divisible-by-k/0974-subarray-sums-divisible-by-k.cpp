class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int currentsum=0;
        int ans=0;
        mp[0]++;
        
        for(int x:nums)
        {
            currentsum+=x;
            int mod=(currentsum%k+k)%k;
            
            //check if mod alerady present
            if(mp.find(mod)!=mp.end())
                ans+=mp[mod];
            mp[mod]++;
        }
    return ans;
    }     
};