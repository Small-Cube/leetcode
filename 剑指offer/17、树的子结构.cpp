/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result=false;
        if(pRoot1!=NULL&&pRoot2!=NULL){
            if(pRoot1->val==pRoot2->val){
                result=DoesT1hasT2(pRoot1,pRoot2);
            }
            if(!result){
                result=HasSubtree(pRoot1->left,pRoot2);
            }
            if(!result){
                result=HasSubtree(pRoot1->right,pRoot2);
            }
        }
        return result;                                                   
    }
private:
    bool  DoesT1hasT2(TreeNode* Tree1,TreeNode* Tree2){
        if(Tree2==NULL) return true;
        if(Tree1==NULL) return false;
        
        if(Tree1->val!=Tree2->val) return false;
    return DoesT1hasT2(Tree1->left,Tree2->left)&&DoesT1hasT2(Tree1->right,Tree2->right);
 
    }
};