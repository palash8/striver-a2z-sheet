class Solution {
public:
    //we are using prefix sum approach here as sliding window and 2 pointer approach do not work here
    //what we do is we traverse through the array and add values to sum variable,check if sum==k then increment the count
    //and we also store the new sum in unordered map 
    //we are using unordered map here to check for sum-k is present in map,like if current sum is 13 and k=9 then if 13-9=4 is alerady present in the map,then we have an subarray equal to k=9
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,count=0;
        unordered_map<int,int>map;
        for(auto i:nums)
        {
            sum+=i;
            if(sum==k)count++;
            
            if(map.find(sum-k)!=map.end())
                count=map[sum-k]+count;
            map[sum]++;
            
        }
       return count; 
    }
};