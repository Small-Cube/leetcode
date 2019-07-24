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
    int maxPathSum(TreeNode* root) {
        DFS(root);
        return res;
    }
    int DFS(TreeNode * root){
        if(root==NULL) return 0;
        int left=max(0,DFS(root->left));
        int right=max(0,DFS(root->right));
        res=max(res,root->val+left+right);
        return max(left,right)+root->val;
    }
private:
    int res=INT_MIN;
};