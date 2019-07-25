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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res; 
        queue<TreeNode*> q;
        q.push(root);
        int size=0;
        int value;
        TreeNode* temp;
        while(!q.empty()){
            value=INT_MIN;
            size=q.size();
            for(int i=0;i<size;++i){
                temp=q.front();
                q.pop();
                value=max(temp->val,value);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            res.push_back(value);
        }
        return res;
    }
};