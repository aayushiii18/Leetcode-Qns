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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev =dummy;
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode* temp=prev->next;
        ListNode* start=temp;
        ListNode* revprev=NULL;
        ListNode*next;
        for(int i=0; i<right-left+1;i++){
         next=temp->next;
         temp->next=revprev;
         revprev=temp;
         temp=next;
        }
        prev->next=revprev;
        start->next=temp;

        



    return dummy->next;    
    }
};