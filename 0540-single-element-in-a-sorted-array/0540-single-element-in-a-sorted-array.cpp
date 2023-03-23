class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //left half
        //1st instance=even index(check the right side)
        //2nd instance=odd index(check the left side if same or not)
        
        //Right half
        //1st instance=odd index(check the left side)
        //2nd instance=evem index(check the right side if same or not)
        
        //so instead of writing many case what we can do is use help of XOR operator
        //XOR operator when number(even)XORED 1 results in next odd and vice versa
        
        //here we are shrking the search space based on indexes
        
         int n=nums.size();
        int l=0,r=n-2;
        while(l<=r)
        {
            int mid=(l+r)/2;
            //checking left half
            if(nums[mid]==nums[mid^1])
            {
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return nums[l];
        
        
    }
};