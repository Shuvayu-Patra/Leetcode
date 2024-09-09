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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode *, int>m;
        ListNode * curr = head;
        while(curr != NULL){
            if(m.find(curr) != m.end()) return curr;
            m[curr] = 1;
            curr = curr -> next;
        }
        return NULL;
    }
};