class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int>a;
        int l=0;
        int m=mat.size();
        int n=mat[0].size();
        int r=m-1;
        while(l<=r)
        {   int h=0,maxi=INT_MIN;
            int mid=(l+r)/2;
            for(int i=0;i<n;i++)
            {    
                maxi=max(maxi,mat[mid][i]);
            }
            for(int i=0;i<n;i++)
            {
                if(maxi==mat[mid][i])
                    h=i;
            }
            if(mid==0)
            {
                if(maxi>mat[mid+1][h])
                {
                    a.push_back(mid);
                    a.push_back(h);
                    break;
                }
                else if(maxi>mat[mid+1][h])
                r=mid-1;
                else
                l=mid+1;
            }
            else if(mid==r)
            {
                if(maxi>mat[mid-1][h])
                {
                    a.push_back(mid);
                    a.push_back(h);
                    break;
                }
                else if(mat[mid-1][h]>maxi)
                r=mid-1;
                else
                l=mid+1;
            }
            else if(mid>0 && mid<r )
            {
                if(maxi>mat[mid-1][h] && maxi>mat[mid+1][h])
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