class Solution {
    public:
        bool visited[505][505];
        vector<pair<int,int >>move_list={{0,1},{0,-1},{1,0},{-1,0}};
        int n,m;
        bool flag;
        bool valid(int i , int j){
            if(i<0||i>=n||j<0||j>=m){
                return false;
            }
            return true;
        }
        void  dfs(int source_i,int source_j,vector<vector<int>>& grid1,vector<vector<int>>& grid2){
            visited[source_i][source_j]=true;
            if (grid1[source_i][source_j]==0)
            {
                flag=false;
            }
            
            for(int i=0;i<4;i++){
                int child_i=source_i+move_list[i].first;
                int child_j=source_j+move_list[i].second;
                if(valid(child_i,child_j)==true && grid2[child_i][child_j]==1 && !visited[child_i][child_j]){
                    dfs(child_i,child_j,grid1,grid2);
                }
            }
        }
        int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
            n=grid1.size();
            m=grid1[0].size();
            int count=0;
            memset(visited,false,sizeof(visited));
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(!visited[i][j] && grid2[i][j]==1){
                        flag=true;
                        dfs(i,j,grid1,grid2);
                        if (flag==true)
                        {
                            count++;
                        }
                        
                    }
                }
            }
            return count;
        }
    };