class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>a;
        for(int val:asteroids)
        {
            if(val>0)st.push(val);
            else
            {
                while(st.size()>0 && st.top()>0 && st.top()<-val)
                st.pop();
                if(st.size()>0 && st.top()>0 && st.top()==-val)
                st.pop();
                else if(st.size()>0 && st.top()>0 && st.top()>-val)
                {
                    
                }
                else
                st.push(val);
            }
        }
        int i=st.size()-1;
        while(i>=0)
        {   int b=st.top();
            st.pop();
            a.push_back(b);
            i--;
        }
        reverse(a.begin(),a.end());
        return a;
        
    }
};