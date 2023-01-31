class Solution {
public:
    //dpsolution by fraz ,same as dp problem of longest increasing subsequence
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        //create a vector of vector to store ages and scores
        vector<vector<int>>v;
        
        int n=scores.size();
        int ans=0;
        //push ages first and in second it should be scores ,so as to sort according to ages and 
        //keep negtive sign in front so as to sort in decresing order,
        //what we are doing here is we are sorting based on ages and if 2 ages are same then it 
        //will get sorted based on decreasing order of scores
        for(int i=0;i<n;i++)
        {
            v.push_back({-ages[i],-scores[i]});
        }
        sort(v.begin(),v.end());
        
        //a dp array to store each index max score
        int dp[n];
        //at starting set all dp elements to zero
        memset(dp,0,sizeof dp);
        
        for(int i=0;i<n;i++)
        {
            //here we are comparing each elememt with its previous element ,and only adding 
            //scores if its greater
            for(int j=i;j>=0;j--)
            {
                if(-v[i][1]<=-v[j][1])
                {
                    dp[i]=max(dp[i],dp[j]-v[i][1]);
                }
            }
            //each time we are updating the answer
            ans=max(ans,dp[i]);
        }
       return ans; 
    }
};