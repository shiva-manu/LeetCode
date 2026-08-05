class Solution {
public:
    bool isCycleWithDFS(unordered_map<int,vector<int>>& adj,int node,vector<bool>& visited,vector<bool>& inRecursion){
        visited[node]=true;
        inRecursion[node]=true;
        for(int &v: adj[node]){
            if(!visited[v] && isCycleWithDFS(adj,v,visited,inRecursion)){
                return true;
            }else if(inRecursion[v]==true){
                return true;
            }
        }
        inRecursion[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       unordered_map<int,vector<int>> adj;
       vector<bool> visited(numCourses,false);
       vector<bool> inRecursion(numCourses,false);
       for(auto edge: prerequisites){
        int u=edge[0];
        int v=edge[1];
        adj[v].push_back(u);
       }

       for(int i=0;i<numCourses;i++){
        if(!visited[i] && isCycleWithDFS(adj,i,visited,inRecursion)){
            return false;
        }
       }
       return true;
    }
};