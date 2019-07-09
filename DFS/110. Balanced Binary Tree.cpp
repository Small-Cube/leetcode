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
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int heightleft=heigh(root->left);
        int heightright=heigh(root->right);
        int res=abs(heightleft-heightright);
        if(res>1) return false;
         return isBalanced(root->left)&&isBalanced(root->right);
    }
    int heigh(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(heigh(root->left),heigh(root->right));        
    }
};