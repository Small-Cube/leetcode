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
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        return DFS(root,0);
    }
    int DFS(TreeNode* root,int cursum){
        int leftsum=0,rightsum=0;     
        if(root->left==NULL&&root->right==NULL){
            return cursum+root->val;
        }
        if(root->left!=NULL){
            leftsum=DFS(root->left,10*(cursum+root->val));
        }
        if(root->right!=NULL){
            rightsum=DFS(root->right,10*(cursum+root->val));
        }
        return leftsum+rightsum;
    } 
};