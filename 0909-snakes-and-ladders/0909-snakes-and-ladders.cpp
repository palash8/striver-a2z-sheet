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
        //queue for storing current positions for options
          queue<int>q;
        //a visited array for all the points
          bool visited[n][n];
        //intializing  the bool array with false,otherwise may cause error like it did in                 //previous submission
          for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
                visited[i][j]=false;
          }
         //push 1st element in queue
          q.push(1);
        //mark it visited
          visited[n-1][0] = true;
        //run the loop till q is not empty
          while(!q.empty())
          {
            int size = q.size();
        
            for(int i =0; i <size; i++)
            {
                //start a bfs traversal picking first element and its 6 options and then pooping 
                //it out
                int x = q.front();
                q.pop();
                //if alerady reach the last point return steps
                if(x == n*n) return steps;
                //run for every possible path from the node,as total 6 numbers can be generated                   //from the dice
                for(int k=1; k <=6; k++)
                {
                  if(k+x > n*n) break;
                    
                //tricky task is to find the coordinates
                    
                  int *pos = findCoordinates(k+x, n);
                  int r = pos[0];
                  int c = pos[1];
                    
                  //if alerady visited continue the loop
                    
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