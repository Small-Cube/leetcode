/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode* findmid(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prenode = NULL;
        while(fast!=NULL&&fast->next!=NULL){
            prenode=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        if(prenode!=NULL){
            prenode->next=NULL;
        }
        return slow;
        
    }
     TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* mid=findmid(head);
        TreeNode* Treehead=new TreeNode(mid->val);
        if(head==mid) return Treehead;
        Treehead->left=sortedListToBST(head);
        Treehead->right=sortedListToBST(mid->next);
        return Treehead;
         
    }
};