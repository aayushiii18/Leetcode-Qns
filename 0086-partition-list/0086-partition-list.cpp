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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummyless=new ListNode(0);
        ListNode* dummygreater=new ListNode(0);
        ListNode* less=dummyless;
        ListNode* greater=dummygreater;
        ListNode* temp=head;
        while(temp != NULL){
            ListNode* next = temp->next;
            if(temp->val <x){
                less->next=temp;
                less=less->next;
            }
            else{
                greater->next=temp;
                greater=greater->next;
            }
            temp=next;
        }
        greater->next = NULL;
        less->next=dummygreater->next;
        return dummyless->next;
        
        

        
    }
};