class Solution {
public:
    //anuj bhaiya approach video
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0;
        //declare 2 vectors for storing leftmost and rightmost maximum height,by takinf left from
        //starting and right from end
        vector<int>left(n,0);
        vector<int>right(n,0);
        left[0]=height[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);
        }
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
        //now when you get both the maximum height for a particular element in left and right
        //just use the formula below
        for(int i=0;i<n;i++)
        {
            sum+=(min(left[i],right[i])-height[i]);
        }
        return sum;
        
    }
};