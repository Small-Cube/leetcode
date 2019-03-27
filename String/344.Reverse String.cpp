class Solution {
public:
    void reverseString(vector<char>& s) {
         //不加这一句也能通过，加上可以避免一些问题。
         if(s.size()==0) return ;
         int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left++], s[right--]);
        }  
    }
};
