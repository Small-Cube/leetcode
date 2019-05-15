class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;
        int len=s.size();
        stack<char> a;
        for(int i=0;i<len;++i){
            if((s[i]=='(')||(s[i]=='[')||(s[i]=='{'))
                a.push(s[i]);
            else{
                if(a.empty()) return false;
                if((s[i]==')')&&(a.top()!='(')) return false;
                if((s[i]==']')&&(a.top()!='[')) return false;
                if((s[i]=='}')&&(a.top()!='{')) return false;
                a.pop();  
            }                               
        }
        return a.empty();
    }
};