//动态规划
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<=1) return nums.empty()?0:nums[0];
        vector<int> dp={nums[0],max(nums[0],nums[1])};
        for(int i=2;i<nums.size();++i){
            
            dp.push_back(max(dp[i-2]+nums[i],dp[i-1]));
        }
        return dp.back();
    }
};
//方法2
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        int res1=0,res2=0,res=0;
        for(int i=0;i<nums.size();++i){
           if(i%2==0){
               res1=max(res2,res1+nums[i]);
           }
            else res2=max(res1,res2+nums[i]);
        }
        res=max(res1,res2);
        return res;
    }
};