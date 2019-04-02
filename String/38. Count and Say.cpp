class Solution {
public:
    string countAndSay(int n) {
        if(n<1) return "";
        string res="1";
        while(--n){
            string cur="";
            for(int i=0;i<res.size();++i){
                int cnt=1;
                //判断是不是有连续相同字符
                while(i+1<res.size()&&res[i]==res[i+1]){
                    ++cnt;
                    ++i;
                }
                cur+=to_string(cnt)+res[i];
            }
            //更新结果
            res=cur;
        }
        return res;
    }
};
