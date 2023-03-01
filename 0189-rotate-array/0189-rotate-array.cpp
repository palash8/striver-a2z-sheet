class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        //Method1
       /* int n=nums.size();
        vector<int>copy(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n]=copy[i];
        }*/
        
        //Method 2
       int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};