class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //if(nums.empty()) return false;
        sort(nums.begin(),nums.end());
        int flag=0;
        for(int i=0;i<(int)nums.size()-1;++i){
            if(nums[i]==nums[i+1])
            return true;
                
        }        
            return false;  
    }
};
 
//哈希表
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) != m.end()) return true;
            ++m[nums[i]];
        }
        return false;
    }
};
