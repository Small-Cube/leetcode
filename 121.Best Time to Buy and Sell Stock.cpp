class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //INT_MAX是一个int类型不能超过的值
        int maxprofit=0,minprice=INT_MAX;
        //范围for
        for(int price:prices){
            minprice=min(minprice,price);
            maxprofit=max(maxprofit,price-minprice);
        }
        return maxprofit;
    }
};
