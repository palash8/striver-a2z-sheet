class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        //approach given by Techdose
        //basically what we are doing here is storing p string in a vector and storing its               //frequency of every character and then taking another vector to store s frequency but 
        //of size of window=p.size(),and comparing with p vector if equal or not,all and all
        //we are using slinding window approach to perform that and storing staring indexes
        vector<int>ans;
        vector<int>ph(26,0);
        vector<int>h(26,0);
        int window=p.size();
        int len=s.size();
        
        if(len<window)
            return ans;
            
        int left=0,right=0;
        
        while(right<window)
        {
            ph[p[right]-'a']++;
            h[s[right]-'a']++;
            right++;
        }
        right=right-1;
        
        while(right<len)
        {
            if(ph==h)
                ans.push_back(left);
            right+=1;
            
            if(right!=len)
                h[s[right]-'a']++;
            h[s[left]-'a']--;
            left+=1;
                
        }
        return ans;
    }
};