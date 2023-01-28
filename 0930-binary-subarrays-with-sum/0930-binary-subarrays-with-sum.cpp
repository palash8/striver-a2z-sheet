class Solution {
public:
    //there are 3 approaches for this problem
    //1.Brute-Force -> Using nested loop -> T.C = O(n^2) ; S.C = O(1)
    //Optimised -> Using hash map -> T.C = O(n) ; S.C = O(n)
    //Optimal -> Using sliding window -> T.C = O(n) ; S.C =O(n)
    //There is a nice article contributed by sbjaj2018
    //link in notes
    int atmostsubarrays(vector<int> &nums,int goal)
    {
        //goal cant be negaative
        if(goal<0)
            return 0;
        int i=0,j=0,res=0,sum=0;
        
        //till j is less that size of nums
        while(j<nums.size())
        {
            //adding j element sum all the time
            sum+=nums[j];
            
            //if anytime sum becomes greater that goal then subtracting ith element sum and                   //moving i forward
            while(sum>goal)
            {
                sum-=nums[i];
                i++;
            }
            //always adding number of elements for subarray calculation it will go like 1+2+3...
            res+=(j-i+1);
            j++;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostsubarrays(nums,goal)-atmostsubarrays(nums,goal-1);
        
    }
};