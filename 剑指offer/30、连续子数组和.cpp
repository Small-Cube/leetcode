class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size()==0) return 0;
        int res=INT_MIN,cur=0;
        for(int i=0;i<array.size();++i){
            cur=max(array[i],array[i]+cur);
            res=max(res,cur);
        }
        return res;
 
    }
};