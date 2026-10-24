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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* p1 = nullptr;
        while (c1 != nullptr) {
            ListNode* n1 = c1->next;
            c1->next = p1;
            p1 = c1;
            c1 = n1;
        }
        ListNode* c2 = l2;
        ListNode* p2 = nullptr;
        while (c2 != nullptr) {
            ListNode* n2 = c2->next;
            c2->next = p2;
            p2 = c2;
            c2 = n2;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        int carry = 0;
        while (p1 != nullptr || p2 != nullptr || carry != 0) {
            int sum = carry;
            if (p1 != nullptr) {
                sum += p1->val;
                p1 = p1->next;
            }
            if (p2 != nullptr) {
                sum += p2->val;
                p2 = p2->next;
            }
            int digit = sum % 10;
            carry = sum / 10;
            ListNode* new_node = new ListNode(digit);
            current->next = new_node;
            current = current->next;
        }
        return dummy->next;
    }
};
