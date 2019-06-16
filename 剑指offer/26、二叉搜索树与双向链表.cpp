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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == nullptr) return nullptr;
        TreeNode* pre = nullptr;
         
        convertHelper(pRootOfTree, pre);
         
        TreeNode* res = pRootOfTree;
        while(res ->left)
            res = res ->left;
        return res;
    }
     
    void convertHelper(TreeNode* cur, TreeNode*& pre)
    {
        if(cur == nullptr) return;
        //左子树
        convertHelper(cur ->left, pre);
        //处理
        cur ->left = pre;
        if(pre) pre ->right = cur;
        pre = cur;
        //右子树
        convertHelper(cur ->right, pre);
       
    }
};