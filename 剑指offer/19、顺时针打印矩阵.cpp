class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> result;
        if(matrix.empty())
            return result;
        int rows = matrix.size();
        int cols = matrix[0].size();
        // 圈的四个角标
        int left = 0;
        int right = cols-1;
        int top = 0;
        int btm = rows-1;
        // 循环打印圈
        while(left <= right && top <= btm){             
            // 圈的第一步
            for(int i=left;i<=right;++i)                
                result.push_back(matrix[top][i]);       
            // 圈的第二步
            if(top<btm)                                 
                for(int i=top+1;i<=btm;++i)             
                    result.push_back(matrix[i][right]); 
            // 圈的第三步
            if(top<btm && left<right)                   
                for(int i=right-1;i>=left;--i)          
                    result.push_back(matrix[btm][i]);   
            // 圈的第四步
            if(top+1<btm && left<right)                 
                for(int i=btm-1;i>=top+1;--i)           
                    result.push_back(matrix[i][left]);  
 
            ++left;--right;++top;--btm;
        }
        return result;
    }
};