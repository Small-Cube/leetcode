class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return false;
        int m = board.size(), n = board[0].size();
        //全部初始化为false
        vector<vector<bool> > row(m, vector<bool>(n, false));
        vector<vector<bool> > col(m, vector<bool>(n, false));
        vector<vector<bool> > UpDown(m, vector<bool>(n, false));
        for(int i=0;i<9;++i){
             for(int j=0;j<9;++j){
                 //不验证数字之外的元素
                if(board[i][j]>='1'&&board[i][j]<='9'){
                    //c是用来判断当前元素是第几个元素
                    int c=board[i][j]-'1';
                    //如果已经存在某行或某列已经存在该元素那么返回错误
                if(row[c][j]||col[i][c]||UpDown[3*(i/3)+(j/3)][c])
                    return false;
                    //没有该元素则设置为true
                    row[c][j]=true;
                    col[i][c]=true;
                    UpDown[3*(i/3)+(j/3)][c]=true;
                    
                }
                
            }  
        }
           
        return true;
    }
};
