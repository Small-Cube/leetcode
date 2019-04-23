class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN,cur=0;
        for(int i=0;i<nums.size();++i){
            cur=max(nums[i],nums[i]+cur);
            res=max(res,cur);
        }
        return res;
    }
};