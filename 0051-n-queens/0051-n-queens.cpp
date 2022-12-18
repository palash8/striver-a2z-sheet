class Solution {
public:
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&leftrow, vector<int>&upperdiag,vector<int>&lowerdiag,int n)
    {
        //base case
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(leftrow[row]==0 && upperdiag[row+col]==0 && lowerdiag[n-1+col-row]==0)
            {
                board[row][col]='Q';
                leftrow[row]=1; 
                upperdiag[row+col]=1;
                lowerdiag[n-1+col-row]=1;
                solve(col+1,board,ans,leftrow,upperdiag,lowerdiag,n);
                leftrow[row]=0; 
                upperdiag[row+col]=0;
                lowerdiag[n-1+col-row]=0;
                
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
           board[i]=s;
        vector<int> leftrow(n,0) ,upperdiag(2*n-1,0),lowerdiag(2*n-1,0);
        solve(0,board,ans,leftrow,upperdiag,lowerdiag,n);
        return ans;
        
    }
};