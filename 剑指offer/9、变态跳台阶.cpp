class Solution {
public:
    int jumpFloorII(int number) {
        if(number==0) return 0;
        int res=1;
        for(int i=1;i<number;++i){
            res=res*2;
        }
        return res;
    }
};