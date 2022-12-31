class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid,int n,int m,int &count,int cnttillnow,int &ans)
    {
        if(i<0 || i>=n || j<0 || j>=m)return;
        
        if(grid[i][j]==-1)return;
        
        if(grid[i][j]==2)
        {
            if(cnttillnow-1==count)
                ans+=1;
           return;
        }
        grid[i][j]=-1;
        vector<pair<int,int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        
        for(pair<int,int>p:dir)
        {
            int x=i+p.first;
            int y=j+p.second;
            
            if(x>=0 || x<n || y>=0 || y<m)
            {
                dfs(x,y,grid,n,m,count,cnttillnow+1,ans);
            }
        }
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int srcx;
        int srcy;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                    count++;
                else if(grid[i][j]==1)
                {
                    srcx=i;
                    srcy=j;
                }
            }
        }
        int ans=0;
        int cnttillnow=0;
        dfs(srcx,srcy,grid,n,m,count,cnttillnow,ans);
        return ans;
        
    }
};