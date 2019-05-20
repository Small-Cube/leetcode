/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        stack<int> store;
        ListNode* temp=head;
        while(temp!=NULL){
            store.push(temp->val);
            temp=temp->next;
        }
        while(!store.empty()){
            res.push_back(store.top());
            store.pop();
        }
        return res;
    }
};