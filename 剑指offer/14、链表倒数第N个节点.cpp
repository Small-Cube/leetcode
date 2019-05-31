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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==NULL||k==0) return NULL;
        ListNode* first=pListHead;
        ListNode* second=pListHead;
        int count=0;
        while(first!=NULL){
            first=first->next;
            ++count;
        }
        if(k>count) return NULL;
        //if(k==count) return pListHead;
        int target=count-k;
        for(int i=0;i<target;++i){
            second=second->next;
        }
        return second;
        
    }
};
//双指针法
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==NULL||k==0) return NULL;
        ListNode* first=pListHead;
        ListNode* second=pListHead;
       for(int i=0;i<k-1;++i){
            if(first->next!=NULL){
               first=first->next; 
            }
           else return NULL;
        }
        while(first->next!=NULL){
            first=first->next;
            second=second->next;
        }
        return second;
    }
};