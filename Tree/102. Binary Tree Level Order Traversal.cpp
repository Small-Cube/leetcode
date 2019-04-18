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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(root!=NULL){
            q.push(root);
        }
        while(!q.empty()){
            vector<int> onelevle;
            for(int i=q.size();i>0;--i){
                TreeNode* t=q.front();
                q.pop();
                onelevle.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
             }
           res.push_back(onelevle);
        }
        return res;
        
    }
};