/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0) return NULL;
        vector<int> preleft,preright,midleft,midright;
        int target=0;
        TreeNode* Head=new TreeNode(preorder[0]);
        for(int i=0;i<inorder.size();++i){
            if(inorder[i]==preorder[0]){
                target=i;
                break;
            }
        }
        //重建左子树数组
        for(int i=0;i<target;++i){
            preleft.push_back(preorder[i+1]);
            midleft.push_back(inorder[i]);
        }
        //重建右子树数组
        for(int i=target+1;i<preorder.size();++i){
             preright.push_back(preorder[i]);
             midright.push_back(inorder[i]);
        }
        Head->left=buildTree(preleft,midleft);
        Head->right=buildTree(preright,midright);
        return Head;
        
    }
};