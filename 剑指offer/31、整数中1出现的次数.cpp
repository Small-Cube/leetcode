//暴力求解
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        if(n<1) return 0;
        int res=0;
        for(int i=1;i<=n;++i){
            res+=get1num(i);
        }
        return res;
    }
    int get1num(int n){
        int res=0;
        while(n!=0){
            if(n%10==1)
                ++res;
            n/=10;
        }
        return res;
    }
};
 
//第二种
class Solution {
public:
int NumberOf1Between1AndN_Solution(int n)
    {
    if( n < 0)
        return 0;
    int i = 1;
    int high = n;
    int cnt = 0;
    while(high != 0)
    {
        high = n / pow(10 ,i);//high表示当前位的高位
        int temp = n / pow(10, i - 1);
        int cur = temp % 10;//cur表示第i位上的值，从1开始计算
        int low = n  - temp * pow(10, i - 1);//low表示当前位的低位
        if(cur < 1)
        {
            cnt += high * pow(10, i - 1);
        }
        else if(cur > 1)
        {
            cnt += (high + 1) * pow(10 ,i - 1);
 
        }
        else
        {
 
            cnt += high * pow(10, i - 1);
            cnt += (low + 1);
 
        }
        i++;
    }
    return cnt;
    }
    
    
};