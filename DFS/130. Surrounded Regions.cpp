class Solution {
public:
        
    void solve(vector<vector<char>>& board) {
        if(board.size()==0||board[0].size()==0) return ;
        int h=board.size();
        int w=board[0].size();
        //找到边界的O
        for(int i=0;i<h;++i){
             for(int j=0;j<w;++j){
                bool isEdge=i==0||j==0||i==h-1||j==w-1;
                if(isEdge&&board[i][j]=='O'){
                    DFS(i,j,board);
                }
            }
        }
           
        for(int i=0;i<h;++i){
             for(int j=0;j<w;++j){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
           
    }
void DFS(int i,int j,vector<vector<char>>& board){
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]=='X'||board[i][j]=='#')                return ;
        board[i][j]='#';
        //向上
        DFS(i-1,j,board);
        //向下
        DFS(i+1,j,board);
        //向左
        DFS(i,j-1,board);
        //向右
        DFS(i,j+1,board);
    }
 
};