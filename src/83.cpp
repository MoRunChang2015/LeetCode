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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        ListNode* last = head;
        ListNode* now = head->next;
        while (now != nullptr) {
            if (now -> val == last -> val) {
                last->next = now->next;
                delete now;
                now = last->next;
            } else {
                last = now;
                now = now->next;
            }
        }
        return head;
    }
};
