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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if (!head->next) return NULL;
        ListNode* temp=head;
        ListNode* Pos=(ListNode* )malloc(sizeof(ListNode));
        Pos->next=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int target=len-n;
        temp=Pos;
        for(int i=0;i<target;++i){
            temp=temp->next;
        }
        ListNode* temp2=temp->next;
        temp->next=temp2->next;
        //delete temp; //加上这句就报错，没明白。
        return Pos->next;
   
    }
};
 
//双指针
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head->next) return NULL;
        ListNode *pre = head, *cur = head;
        for (int i = 0; i < n; ++i) cur = cur->next;
        if (!cur) return head->next;
        while (cur->next) {
            cur = cur->next;
            pre = pre->next;
        }
        pre->next = pre->next->next;
        return head;
    }
};
