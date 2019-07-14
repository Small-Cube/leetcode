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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root==NULL) return res;
        temp.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&sum-root->val==0){
             res.push_back(temp);
            }
        pathSum(root->left,sum-root->val);
        pathSum(root->right,sum-root->val);
        temp.pop_back();
        return res;
    }
private:
    vector<vector<int>> res;
    vector<int> temp;
};