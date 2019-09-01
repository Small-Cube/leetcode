class Solution {
public:
    int numPrimeArrangements(int n) {
        if(n<2) return 1;
        vector<bool> judge(n+1,true);
        int count=0;
        for(int i=2;i<=n;++i){
            if(judge[i]==true){
                count++;
                for(int j=i*i;j<=n;j+=i){
                    judge[j]=false;
                } 
            }     
        }
        unsigned long long num=1;
        for(int i=count;i>0;--i){
            num=(num*i)%(1000000007);
        }
        for(int j=n-count;j>0;--j){
            num=(num*j)%(1000000007);
        }
        return num;
    }
    
};