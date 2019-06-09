/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;
        std::deque<TreeNode*> nodedeque;
        nodedeque.push_back(root);
        while(!nodedeque.empty()){
            TreeNode* temp=nodedeque.front();
            res.push_back(nodedeque.front()->val);
            nodedeque.pop_front();
            if(temp->left!=NULL)
                  nodedeque.push_back(temp->left);
            if(temp->right!=NULL)
                  nodedeque.push_back(temp->right); 
        }
        return res;
    }
};