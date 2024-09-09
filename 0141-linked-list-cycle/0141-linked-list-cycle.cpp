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
    bool hasCycle(ListNode *head) {
        // if(head == NULL or head->next == NULL) return false;
        unordered_map<ListNode *, int>m;
        ListNode * curr = head;
        while(curr != NULL){
            if(m.find(curr) != m.end()) return true;
                m[curr] = 1;
                curr = curr -> next;
            
        }
        return false;
    }
};