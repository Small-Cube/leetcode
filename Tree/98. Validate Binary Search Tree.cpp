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
    bool isValidBST(TreeNode* root) {
        return isvalidBst(root,LONG_MIN,LONG_MAX);
        
    }
    bool isvalidBst(TreeNode* root,long rightmin,long leftmax){
        if(!root) return true;
        if(root->val<=rightmin||root->val>=leftmax) return false;
        return isvalidBst(root->left,rightmin,root->val)&&isvalidBst(root->right,root->val,leftmax);
    }
};
 
//中序遍历
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        vector<int> vals;
        inorder(root, vals);
        for (int i = 0; i < vals.size() - 1; ++i) {
            if (vals[i] >= vals[i + 1]) return false;
        }
        return true;
    }
    void inorder(TreeNode* root, vector<int>& vals) {
        if (!root) return;
        inorder(root->left, vals);
        vals.push_back(root->val);
        inorder(root->right, vals);
    }
};
