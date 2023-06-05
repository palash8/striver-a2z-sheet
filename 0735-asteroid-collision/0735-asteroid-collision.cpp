class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int>s;
        vector<int>v;
        
        for(auto a:asteroids)
        {
            while(!s.empty() and a<0 and s.top()>0)
            {
                int diff=a+s.top();
                if(diff<0)
                    s.pop();
                else if(diff>0)
                    a=0;
                else
                {
                    a=0;
                    s.pop();
                }
            }
            if(a)
                s.push(a);
        }
        
        int i=s.size()-1;
        while(i>=0)
        {   int b=s.top();
            s.pop();
            v.push_back(b);
            i--;
        }
        reverse(v.begin(),v.end());
        
        return v;
    }
};