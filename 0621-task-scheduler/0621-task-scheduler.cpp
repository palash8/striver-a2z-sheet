class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        //map for storing number of times the character occurs
        unordered_map<char,int>counts;
        for(char t:tasks)
            counts[t]++;
        //max heap to retrieve max element every time,as the character with maximum number need           //to be schduled first
        priority_queue<int>pq;
        for(auto c:counts)
            pq.push(c.second);
        
        
        int result=0;
        //run loop till max heap is not empty
        while(!pq.empty())
        {
            int time=0;
    //list to store popped out elements and through this list only pushed in again in the heap
            vector<int>tmp;
            //run upto n+1 as a window
            for(int i=0;i<n+1;i++)
            {
                if(!pq.empty())
                {
                    //push top-1 to tmp 
                    tmp.push_back(pq.top()-1);
                    //pop that element from heap
                    pq.pop();
                    //increment time
                    time++;
                }
            }
            for(auto t:tmp)
                //now push in elemets in tmp,if condition to check not to push 0 element
               if(t) pq.push(t);
            //at last if pq is not empty add the window size(n+1) else add time
             
            result+= pq.empty()?time:n+1;
        }
        return result;
    }
};