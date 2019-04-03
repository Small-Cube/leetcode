class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string res="";
        int len=strs.size();
        for(int i=0;i<strs[0].size();++i){
            char c=strs[0][i];
            for(int j=0;j<len;++j){
                if(strs[j][i]!=c){
                    return res;
                }
                    
            }
             res.push_back(c);
        }
       
        return res;
    }
};
