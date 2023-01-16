class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            //to maintain the boundary k and pop elements that are out of bound
            if(!dp.empty() && dp.front()==i-k)
                dp.pop_front();
            //to maintain the decreasing order of elements in queue
            while(!dp.empty() && nums[dp.back()]<=nums[i])
                dp.pop_back();
            //push every new element
            dp.push_back(i);
            //storing values only after k-1 indexes
            if(i>=k-1)
                ans.push_back(nums[dp.front()]);
        }
       return ans; 
    }
};