class Solution {
public:
    int arr[2]={0};
    int* findCoordinates(int curr, int n) 
    {
        int r = n - (curr - 1) / n-1;
        int c = (curr - 1) % n;
        if (r % 2 == n % 2) 
        {
            arr[0]=r;
            c=n-1-c;
            arr[1]=c;
            return arr;
        } 
        else 
        {
            arr[0]=r;
            arr[1]=c;
            return arr;;
        }
    }       
    int snakesAndLadders(vector<vector<int>>& board) {
          int n = board.size();
          int steps = 0;
          queue<int>q;
          bool visited[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                visited[i][j]=false;
        }
          q.push(1);
          visited[n-1][0] = true;
          while(!q.empty())
          {
            int size = q.size();
        
            for(int i =0; i <size; i++)
            {
                int x = q.front();
                q.pop();
                if(x == n*n) return steps;
                for(int k=1; k <=6; k++)
                {
                  if(k+x > n*n) break;
                  int *pos = findCoordinates(k+x, n);
                  int r = pos[0];
                  int c = pos[1];
                  if(visited[r][c] == true) 
                     continue;
                  visited[r][c] = true;
                  if(board[r][c] == -1)
                  {
                      q.push(k+x);
                  }
                  else
                  {
                      q.push(board[r][c]);
                  }
               }
          }
          
        steps++;
       
      }    
        return -1;
    }
};