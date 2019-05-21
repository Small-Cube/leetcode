/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
		if(pre.size()==0) return NULL;
        vector<int> pre_left,pre_right,vin_left,vin_right;
        int root = 0;
        //前序遍历的第一个一定是根节点
        TreeNode* head=new TreeNode(pre[0]);
        //在中序遍历中找到根节点的位置，然后就可以区分左子树和右子树
        for(int i=0;i<vin.size();++i){
            if(vin[i]==pre[0]){
                root=i;
                break;
            }
        }
        //重新生成前序和中序的前一半数组
        for(int i=0;i<root;++i){
            pre_left.push_back(pre[i+1]);
            vin_left.push_back(vin[i]);
        }
        //重新生成前序和中序的后一半数组
        for(int i=root+1;i<pre.size();++i){
            pre_right.push_back(pre[i]);
            vin_right.push_back(vin[i]);
        }
        //左子树递归
        head->left=reConstructBinaryTree(pre_left,vin_left);
        //右子树递归
        head->right=reConstructBinaryTree(pre_right,vin_right);
        //返回根节点
        return head;
    }
};