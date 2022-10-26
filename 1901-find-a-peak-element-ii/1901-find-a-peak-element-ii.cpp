class Solution {
public:
    int findmax(vector<vector<int>> &mat , int r)
    {
        int maxe=INT_MIN;
        int idx=0;
        for(int i=0;i<mat[0].size();i++)
        {
            
            if(maxe<mat[r][i])
            {
                maxe=mat[r][i];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int>a;
        int l=0;
        int m=mat.size();
        int r=m-1;
        while(l<=r)
        {   
            int mid=(l+r)/2;
            int h=findmax(mat,mid);
             int val=mat[mid][h];
            
            if(mid==0)
            {
                if(val>mat[mid+1][h])
                {
                    a.push_back(mid);
                    a.push_back(h);
                    break;
                }
                else if(val>mat[mid+1][h])
                r=mid-1;
                else
                l=mid+1;
            }
            else if(mid==r)
            {
                if(val>mat[mid-1][h])
                {
                    a.push_back(mid);
                    a.push_back(h);
                    break;
                }
                else if(mat[mid-1][h]>val)
                r=mid-1;
                else
                l=mid+1;
            }
            else if(mid>0 && mid<r )
            {
                if(val>mat[mid-1][h] && val>mat[mid+1][h])
                 {
                    a.push_back(mid);
                    a.push_back(h);
                    break;
            
                 }
                else if(mat[mid-1][h]>mat[mid+1][h])
                r=mid-1;
                else
                l=mid+1;
           }
                    
         }
                
     return a; 
    }
};