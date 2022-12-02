#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        vector<vector<int>>b;
        int n=nums.size();
        int power=pow(2,n);
        for(int counter=0;counter<power;counter++)
        {
            for(int j=0;j<n;j++)
            {
                if((counter&(1<<j))!=0)
                    a.push_back(nums[j]);
            }
            b.push_back(a);
            a.clear();
            
        }
        return b;
        
    }
};