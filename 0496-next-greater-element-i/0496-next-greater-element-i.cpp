class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums2.size();
        int nge[n];
        vector<int>ans;
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])
            {
              st.pop();  
            } 
            if(!st.empty())
                nge[i]=st.top();
            else
                nge[i]=-1;
            
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(nge[j]);
                }
            }
        }
        return ans;
        
    }
};