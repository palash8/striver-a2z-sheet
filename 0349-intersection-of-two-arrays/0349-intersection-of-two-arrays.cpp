class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>v;
        vector<int>::iterator ip;
        for(auto i:nums1)
            s1.insert(i);
        for(auto i:nums2)
            s2.insert(i);
        for(auto i:nums1)
        {
            if(s2.find(i)!=s2.end())
                v.push_back(i);
        }
        sort(v.begin(),v.end());
  
       // Using std::unique
       ip = std::unique(v.begin(), v.end());
      // Resizing the vector so as to remove the undefined terms
       v.resize(std::distance(v.begin(), ip));
        return v;
        
        
    }
};