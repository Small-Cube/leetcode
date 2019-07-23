/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
    Node() {}
    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        Node* head=root;
        queue<Node*> q;
        q.push(head);
        int size=0;
        while(!q.empty()){
            
            size=q.size();
            for(int i=0;i<size-1;++i){
                Node* cur=q.front();
                q.pop();
                if(q.empty()) cur->next=NULL;
                else cur->next=q.front();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
             Node* nextcur=q.front();
             q.pop();
            if(nextcur->left) q.push(nextcur->left);
            if(nextcur->right) q.push(nextcur->right);
        }
        return root;
    }
};