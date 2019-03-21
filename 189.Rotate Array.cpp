class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()||(k%=nums.size())==0) return ;
        int k2=k%nums.size();
        int n=nums.size();
        for(int i=0;i<n-k2;i++){
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
       
    }
};
