//暴力求解
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size()-1;++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]+nums[j]==target){
                    vector<int> solution={i,j};
                    return solution;
                }
                    
            }
        }
//题目中测试用例不会执行到这一步，但是不加这个会出错，因为这个函数返回值是一个数组。
//也可以使用异常抛出
        vector<int> wrong;
        return wrong;
	//test
            
    }
};
 
 
//据说是leetcode的奇淫技巧，加在前面可以优化输入输出有可能会使你的程序运行速度超过100%的用户
static auto x = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//哈希查找
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int i=0;
        for(;i<nums.size();i++){
            int value=target-nums[i];
            if(map[value]!=0){
                vector<int> solution={map[value]-1,i};
                return solution;
            }
            else{
                map[nums[i]]=i+1;
            }
        }     
        vector<int> wrong;
        return wrong;
            
    }
};
