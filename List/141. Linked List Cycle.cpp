/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//快慢指针
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) return true;
        }
        return false;
        
    }
};
//哈希表
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> m;
        ListNode *temp=head;
        while(temp!=NULL){
            if(++m[temp]>1) return true;
            temp=temp->next;
        }
        return false;
        
    }
};
