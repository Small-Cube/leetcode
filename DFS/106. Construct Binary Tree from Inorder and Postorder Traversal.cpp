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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()==0||postorder.size()==0) return NULL;
        vector<int> inorder_left,inorder_right,pos_left,pos_right;
        TreeNode* Head=new TreeNode(postorder[postorder.size()-1]);
        int target;
        for(int i=0;i<inorder.size();++i){
            if(inorder[i]==postorder[postorder.size()-1]){
                target=i;
                break;
            }
        }
        for(int i=0;i<target;++i){
            inorder_left.push_back(inorder[i]);
            pos_left.push_back(postorder[i]);
        }
        for(int i=target+1;i<inorder.size();++i){
            inorder_right.push_back(inorder[i]);
            pos_right.push_back(postorder[i-1]);
        }
        Head->left=buildTree(inorder_left,pos_left);
        Head->right=buildTree(inorder_right,pos_right);
        return Head;
    }
};