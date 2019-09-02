class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int res=0;
        int ans=0;
        for(int i=0;i<k;++i){
            ans+=calories[i];
        }
        if(ans>upper) res+=1;
        if(ans<lower) res-=1;
        int len=calories.size();
        for(int j=k;j<len;++j){
            ans=ans-calories[j-k]+calories[j];
            if(ans>upper) res+=1;
            if(ans<lower) res-=1;
        }
        return res;
    }
};
//其实也可以把第一个循环缩小，这样就不需要在循环外面计算ans如下
class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int res=0;
        int ans=0;
        for(int i=0;i<k-1;++i){
            ans+=calories[i];
        }
        int len=calories.size();
        for(int j=k-1;j<len;++j){
            ans+=calories[j];
            if(ans>upper) res+=1;
            if(ans<lower) res-=1;
            ans-=calories[j-k+1];
        }
        return res;
    }
};