class Solution {
public:
    bool isPalindrome(string s) {
        if(!s.size()) return true;
        int left=0,right=s.size()-1;
        while(left<right){
            if(!isNumChar(s[left])) ++left;
            else if(!isNumChar(s[right])) --right;
            else if(s[left] != s[right]) return false;
            else{left++;right--;}
            
        }
        return true;      
    }
    bool isNumChar(char &a){
         if(a>='a'&&a<='z') return true;
         if(a>='A'&&a<='Z'){
             a+=32;
             return true;
         } 
         if(a>='0'&&a<='9') return true;
        
            return false; 
         }
    
  
};
