class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        //created a ordered map to store sorted value->frequency
        map<int,int>mp;
        for(int x:hand)
            mp[x]++;
        
        //checking in map
        
        for(auto it:mp)
        {
            //ignoring elements with 0 frequency
            if(mp[it.first]>0)
            {
                //checking consecutive elements for a particular group
                for(int i=1;i<groupSize;i++)
                {
                    //deleting frequency for x+1,x+2 seeing the frequency of x
                    mp[it.first+i]-=mp[it.first];
                    //if anytime the frequency of x+1,x+2 becomes zero return false
                    if(mp[it.first+i]<0)
                        return false;
                }
            }
        }
        return true;
    }
};