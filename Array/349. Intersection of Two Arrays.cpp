class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a(nums1.begin(),nums1.end()),res;
        for(auto num:nums2){
            if(a.count(num)!=0)
                res.insert(num);
        }
        return vector<int>(res.begin(),res.end());
        
    }
};
