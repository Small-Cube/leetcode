class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
     
        return bst(sequence,0,sequence.size()-1); 
    }
 private:
    bool bst(vector<int> &squence,int begin,int end){
        if(squence.empty()||begin>end) return false;
        int root=squence[end];
        int i=0;
        for(;i<end;++i){
            if(squence[i]>root)
                break;
        }
        int j=i;
        for(;j<end;++j){
            if(squence[j]<root) return false;
        }
        bool left=true;
        if(i>begin)
            left=bst(squence,begin,i-1);
        bool right=true;
        if(i<end)
            right=bst(squence,i,end-1);
        
        return (left&&right);
    }
};