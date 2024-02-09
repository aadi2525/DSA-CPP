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

ListNode* mergetwo(ListNode* l1,ListNode* l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    ListNode* newhead = NULL;
    if(l1->val < l2->val){
        newhead = l1;
        newhead->next = mergetwo(l1->next ,l2);
    }else{
        newhead = l2;
        newhead->next = mergetwo(l1,l2->next);
        }
        return newhead;
}


    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next==NULL) return head;
        ListNode* slow= head;
        ListNode* fast = head->next;
        

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
            ListNode* n= slow->next;
            slow->next = NULL;

           ListNode* a = sortList(head);
           ListNode* b = sortList(n);

           head = mergetwo(a,b);
           return head;
    
    }
};