class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map<char,int> roman_int{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<s.size();++i){
            int val=roman_int[s[i]];
            if(i==s.size()-1||roman_int[s[i+1]]<=roman_int[s[i]]) res+=val;
            else res-=val;
        }
        return res;
    }
};