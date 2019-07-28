class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0) return  0;
        int sum=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]=='1'){
                    ++sum;
                    DFS(i,j,grid);
                }
            }
        }
        return sum;
    }
    void DFS(int x,int y,vector<vector<char>>& map){
        if(x<0||x>=map.size()||y<0||y>=map[0].size()) return ;
        if(map[x][y]=='1'){
            map[x][y]='0';
            DFS(x-1,y,map);
            DFS(x+1,y,map);
            DFS(x,y-1,map);
            DFS(x,y+1,map);
        }
    }
};