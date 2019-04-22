class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;//这一句可以不加
        int first=1;
        int second=2;
        for(int i=3;i<=n;++i){
             int newway=second+first;
             first=second;
             second=newway;
        }
        return second;
        
    }
};