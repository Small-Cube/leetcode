//双指针
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                ++i;
                ++j;
            }
            else if(nums1[i]>nums2[j])
                ++j;
            else ++i;
                
        }
        return res;
        
    }
};
 
//哈希表
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> a;
        vector<int> res;
        for(auto num1:nums1)
            ++a[num1];
        for(auto num2:nums2){
            if(a[num2]>0){
                res.push_back(num2);
                a[num2]--;
            }
        }
        return res;
            
    }
};
