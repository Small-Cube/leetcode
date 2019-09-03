class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int len=strs.size();
        if(len==0) return res;
        map<string,vector<string>> m_res;
        for(int i=0;i<len;++i){
            string s=strs[i];
            sort(s.begin(),s.end());
            m_res[s].push_back(strs[i]);
        }
         map<string,vector<string>>::iterator it;
        for(it=m_res.begin();it!=m_res.end();++it){
            res.push_back(it->second);
        }
        return res;
    }
};