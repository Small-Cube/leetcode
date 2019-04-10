/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* NewNode=new ListNode(0);
        ListNode* cur=NewNode;
        while(l1&&l2){
            if(l1->val<=l2->val){
                cur->next=l1;
                l1=l1->next;
            }
            else{
                cur->next=l2;
                l2=l2->next;
            }
            cur=cur->next;
        }
        if(l1==NULL) cur->next=l2;
        if(l2==NULL) cur->next=l1;
        return NewNode->next;
        
    }
};
