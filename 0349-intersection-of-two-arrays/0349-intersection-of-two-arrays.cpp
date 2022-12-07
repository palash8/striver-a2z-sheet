class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        vector<int>::iterator ip;
        if(nums1.size()<=nums2.size())
        {
            for(auto i:nums1)
            {
                for(auto j:nums2)
                {
                    if(i==j)
                        v.push_back(i);
                }
            }
        }
        else
        {
            for(auto i:nums2)
            {
                for(auto j:nums1)
                {
                    if(i==j)
                        v.push_back(i);
                }
            }
            
        }
        
    sort(v.begin(),v.end());
    // Using std::unique
    ip = std::unique(v.begin(), v.end());

    v.resize(std::distance(v.begin(), ip));
        return v;
        
    }
};