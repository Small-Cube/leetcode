class Solution {
public:
    int myAtoi(string str) {
        if(str.empty()) return 0;
        int flag=1,base=0,i=0,n=str.size();
        while(i<n&&str[i]==' ') ++i;
        if(i<n&&(str[i]=='+'||str[i]=='-')){
            flag=(str[i++]=='+') ? 1:-1;
        }
        while(i<n&&str[i]>='0'&&str[i]<='9'){
            if(base>INT_MAX/10||(base==INT_MAX/10&&str[i]-'0'>7)){
                return (flag==1) ? INT_MAX:INT_MIN;
                
            }
            base=base*10+(str[i++]-'0');
        }
        return base*flag;
        
    }
};
