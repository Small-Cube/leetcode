class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        bool flag;
        for(int i=2;i<n;++i){
            flag=isprimes(i);
            if(flag) ++cnt;
        }
        return cnt;
    }
    bool isprimes(int n){
        int m=(int)sqrt(n);
        for(int i=2;i<=m;++i){
            if(n%i==0&&n!=i)
                return false;
        }
        return true;
    }
};
 
 
class Solution {
public:
    int countPrimes(int n) {
        int res=0;
        vector<bool> vis(n,true);
        for(int i=2;i<n;++i){
            if(vis[i]){
                ++res;
                for(int j=2;i*j<n;++j){
                    vis[i*j]=false;
                }
            }
        }
        return res;
    }
};