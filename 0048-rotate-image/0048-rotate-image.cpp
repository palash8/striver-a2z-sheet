class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size(),cols=matrix[0].size();
        /*reverse columns of the matrix one by one */
        for(int i=0;i<rows;i++)
        {
           int start=0;
           int end=cols-1;
            while(start<end)
            {
                swap(matrix[start][i],matrix[end][i]);
                start++;
                end--;
            }
        }
        for(int i=0;i<rows;i++)
        {  
            for(int j=i+1;j<cols;j++)
            {
             swap(matrix[i][j],matrix[j][i]);
             }
        }
        
    }
};