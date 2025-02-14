class Solution {
    public:
        int count;
        bool visited[105][105];
        vector<pair<int,int >>move_list={{0,1},{0,-1},{1,0},{-1,0}};
        int n,m;
        bool valid(int i , int j){
            if(i<0||i>=n||j<0||j>=m){
                return false;
            }
            return true;
        }
        void  dfs(int source_i,int source_j,vector<vector<int>>& grid){
            visited[source_i][source_j]=true;
            for(int i=0;i<4;i++){
                int child_i=source_i+move_list[i].first;
                int child_j=source_j+move_list[i].second;
                if(valid(child_i,child_j)==false){
                    count++;
                }
                else if(valid(child_i,child_j)==true && grid[child_i][child_j]==0){
                    count++;
                }
                else if(valid(child_i,child_j)==true && grid[child_i][child_j]==1 && !visited[child_i][child_j]){
                    dfs(child_i,child_j,grid);
                }
            }
        }
        int islandPerimeter(vector<vector<int>>& grid) {
            count=0;
            n=grid.size();
            m=grid[0].size();
            memset(visited,false,sizeof(visited));
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(!visited[i][j] && grid[i][j]==1){
                        dfs(i,j,grid);
                    }
                }
            }
            return count;
        }
    };