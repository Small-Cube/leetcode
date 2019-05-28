class Solution {
public:
    int rectCover(int number) {
       if(number==0) return 0;
       if(number==1) return 1;
       if(number==2) return 2; 
        int first=1,second=2;
        int res;
        for(int i=3;i<=number;++i){
            res=first+second;
            first=second;
            second=res;
        }
        return res;
    }
};