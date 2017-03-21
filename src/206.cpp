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
    ListNode* reverseList(ListNode* head) {
        ListNode *last = nullptr, *now = head, *temp;
        while (now != nullptr) {
            temp = now->next;
            now->next = last;
            last = now;
            now = temp;
        }
        return last;
    }
};
