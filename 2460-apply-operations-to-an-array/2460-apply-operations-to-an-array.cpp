class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
               nums[i]=2*nums[i];
               nums[i+1]=0;
            }
            
        }
        int i=0;
        int j=i+1;
        while(i<nums.size() && j<nums.size())
        {   
            if(nums[i]!=0)i++;
            else if(nums[j]==0)j++;
            else if(i>j)
               j=i+1;
            else
            {
              if(nums[i]==0 && nums[j]!=0)
              {
                swap(nums[i],nums[j]);
                i++;
                j++;
                
               }     
             
            }
            
        }  
    
       return nums; 
        
    }
};