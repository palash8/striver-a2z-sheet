class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int area=0;
        while(l<r)
        {    int length=r-l;
            if(height[l]>height[r])
            {
                area=max(area,length*height[r]);
                r--;
            }
            else
            {
                area=max(area,length*height[l]);
                l++;
            }
        
                
        }
        return area;
    }
};