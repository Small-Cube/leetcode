class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
         int res=nums[0]+nums[1]+nums[2];
         int abs_Res=abs(res-target);
  
        for(int i=0;i<nums.size()-2;++i){
            int left=i+1,right=nums.size()-1;
            while(left<right){
                int newres=nums[i]+nums[left]+nums[right];
                int newabs=abs(newres-target);
                if(abs_Res>newabs){
                    abs_Res=newabs;
                    res=newres;
                }
                if(newres>target){
                    --right;
                }
                else 
                    ++left;
            }
        }
        return res;
    }
};
