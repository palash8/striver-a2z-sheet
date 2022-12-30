class Solution {
public:
    void dfs(vector<vector<int>>&graph,vector<int>&path,vector<vector<int>>&result,int u)
    {
        path.push_back(u);
        if(u==graph.size()-1)
            result.push_back(path);
        else
            for(int v:graph[u])
                dfs(graph,path,result,v);
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>result;
        vector<int>path;
        dfs(graph,path,result,0);
        return result;
        
        
    }
};