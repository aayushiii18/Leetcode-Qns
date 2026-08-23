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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* newHead = nullptr;
        ListNode* prevGroupTail = nullptr;

        while (curr != nullptr) {
            ListNode* temp = curr;
            int count = 0;
            while (temp != nullptr && count < k) {
                temp = temp->next;
                count++;
            }

            if (count < k) {
                if (prevGroupTail != nullptr)
                    prevGroupTail->next = curr;
                break;
            }

            ListNode* groupStart = curr;
            ListNode* prev = nullptr;

            for (int i = 0; i < k; i++) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            if (newHead == nullptr)
                newHead = prev;

            if (prevGroupTail != nullptr)
                prevGroupTail->next = prev;

            prevGroupTail = groupStart;
        }

        return newHead;
    }
};