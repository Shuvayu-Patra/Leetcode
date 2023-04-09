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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        if(count == n){
            head = head -> next;
            return head;
        }
        int i=1;
        int itoFind = count - n;
        ListNode* prev = head;
        while(i < itoFind){
            prev = prev -> next;
            i++;
        }
        prev -> next = prev -> next -> next;
        return head;
    }
};