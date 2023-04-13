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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* temp1 = list1;
        int pos = 1;
        while(pos < a){
            temp = temp -> next;
            pos++;
        }
        pos = 0;
        while(pos < b){
            temp1 = temp1 -> next;
            pos++;
        }
        ListNode* curr = list2;
        temp -> next = curr;
        while(curr -> next != NULL){
            curr = curr -> next;
        }
        curr -> next = temp1 -> next;
        //temp1 -> next = NULL;
        return list1;  
    }
};