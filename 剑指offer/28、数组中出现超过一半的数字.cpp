class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        unordered_map<int,int> num_res;
        int len=numbers.size()/2;
        for(int i=0;i<numbers.size();++i){
                ++num_res[numbers[i]];
            if(num_res[numbers[i]]>len) return numbers[i];
           }
        return 0;
      }
};