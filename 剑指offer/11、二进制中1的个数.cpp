//第二种
class Solution {
public:
     int  NumberOf1(int n) {
         int count=0;
         for(int i=0;i<32;++i)
         {
             int flag=n&(1<<i);
             if(flag){
                 ++count;
             }
         }
         return count;
     }
};
//第三种
class Solution {
public:
     int  NumberOf1(int n) {
          int count=0;
         while(n){
             n=(n-1)&n;
             ++count;
         }
         return count;
     }
};