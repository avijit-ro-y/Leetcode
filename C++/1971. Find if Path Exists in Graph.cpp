class Solution {
    public:
    vector<int>listt[200005];
    bool visited[200005];
    void dfs(int src){
        visited[src]=true;
        for(int child:listt[src]){
            if(!visited[child]){
                dfs(child);
            }
        }
    }
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            for(int i=0;i<edges.size();i++){
                int a=edges[i][0];
                int b=edges[i][1];
                listt[a].push_back(b);
                listt[b].push_back(a);
            }
            memset(visited,false,sizeof(visited));
            dfs(source);
            if(visited[destination]==true){
                return true;
            }
            else{
                return false;
            }
        }
    };