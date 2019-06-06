class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size()==0) return false;
         stack<int> S;
        for(int i=0,j=0;i<pushV.size();++i){
            S.push(pushV[i]);
            while(j<popV.size()&&popV[j]==S.top()){
                S.pop();
                ++j;
            }
        }
        return S.empty();
    }
    
};