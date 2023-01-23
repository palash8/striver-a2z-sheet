class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //we will solve this question by indegree and outdegree method
        
        //counts outdegree of a person or node 
		//outdegree means number of nodes that are trusted by given specific node 
        vector<int>out(n+1,0);
        //above representation stores value from 0 to n
        
        //counts indegree of a person or node 
		//indegree means number of nodes that trusts a given specific node
        vector<int>in(n+1,0);
        
        //loop counts the indegree and outdegree of every element
        for(auto i:trust)
        {
            out[i[0]]++;
            in[i[1]]++;
        }
        //if a node has outdegree==0 that means that node doesnot trust anyone and
		//indegree ==n-1 that means all other nodes trusts this node except himself
        
		for(int i=1;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
		//if there is no such node return -1
        return -1;
        
        
    }
};