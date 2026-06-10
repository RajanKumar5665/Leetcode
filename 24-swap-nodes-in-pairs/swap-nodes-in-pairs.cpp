class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* first = head;
        ListNode* second = head->next;

        while (first != NULL && second != NULL) {
            ListNode* third = second->next;

            // Swap
            second->next = first;
            first->next = third;

            // Connect previous pair
            if (prev != NULL) {
                prev->next = second;
            } else {
                head = second;
            }

            // Update pointers
            prev = first;
            first = third;

            if (first != NULL) {
                second = first->next;
            } else {
                second = NULL;
            }
        }

        return head;
    }
};