class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
     int n = nums.size();
        std::vector<std::unordered_map<int, int>> dp(n);
        int longest = 2;
        
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < j; i++) {
                int diff = nums[j] - nums[i];
                dp[j][diff] = dp[i].count(diff) ? dp[i][diff] + 1 : 2;
                longest = std::max(longest, dp[j][diff]);
            }
        }
        
        return longest;   
    }
};