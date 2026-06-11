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
    ListNode* sortList(ListNode* head) {
         vector<int> vec;
        ListNode* temp = head;

        while(temp != NULL){
             vec.push_back(temp->val);
             temp = temp->next;
        }

        sort(vec.begin(), vec.end());

        ListNode* dummy = new ListNode(-1);

        ListNode* tail = dummy;

        for(auto it : vec){
              tail->next = new ListNode(it);
              tail = tail->next;
        }

        return dummy->next;
    }
};