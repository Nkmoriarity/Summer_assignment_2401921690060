//                   21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        ListNode* x=list1;
        ListNode* y=list2;
        while(x!=NULL && y!=NULL){
            if(x->val<=y->val){
                ans->next=x;
                x=x->next;
                ans=ans->next;
            }
            else{
                ans->next=y;
                y=y->next;
                ans=ans->next;
            }
        }
        if(x==NULL && y!=NULL){
            ans->next=y;
        }
        if(x!=NULL && y==NULL){
            ans->next=x;
        }              
        return temp->next;
    }
};
