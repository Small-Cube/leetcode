class Solution {
public:
    int Fibonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        long res;
        int mid1=1;
        int mid2=1;
        for(int i=3;i<=n;++i){
            res=mid1+mid2;
            mid1=mid2;
            mid2=res;
        }
        return res;
    }
};