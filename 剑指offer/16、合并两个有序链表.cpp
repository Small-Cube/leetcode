/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL) return pHead2;
        if(pHead2==NULL) return pHead1;
        ListNode* newNode=(ListNode*) new ListNode(0);
        ListNode* ptr1=pHead1;
        ListNode* ptr2=pHead2;
        ListNode* cur=newNode;
        while(ptr1!=NULL&&ptr2!=NULL){
            if((ptr1->val)<=(ptr2->val)){
                cur->next=ptr1;
                ptr1=ptr1->next;
            }
            else{
                cur->next=ptr2;
                ptr2=ptr2->next;
            }
            cur=cur->next;
        }
        if(ptr1==NULL) cur->next=ptr2;
        if(ptr2==NULL) cur->next=ptr1;
        return newNode->next;
    }
};