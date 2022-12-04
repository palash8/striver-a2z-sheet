class Solution {
public:
    long long dividePlayers(vector<int>& s) {
       sort(s.begin(),s.end());
        long long int n=s.size();
        long long int l=0,r=n-1;
        long long int sum=0;
        long long int set=s[l]+s[r];
        while(l<r)
        {
            int ans=s[l]+s[r];
            sum+=s[l]*s[r];
            l++;
            r--;
            if(set!=ans)return -1;
        }
        
      return sum;  
        
    }
};