class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i=0,j=0,n=nums.size()-1;
        for(i;i<=n;++i){
            if(nums[i]!=0){
                swap(nums[i],nums[j++]);
            }
        }
    }
};
