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
private:
    void createLL(ListNode* &anshead , int a , ListNode* &tail){
        ListNode* temp = new ListNode();
        temp -> val = a;
        if(anshead == NULL){
            anshead = temp;
            temp -> next = NULL;
            tail = temp;
        }
        else{
            tail -> next = temp;
            temp -> next = NULL;
            tail = temp;
        }  
    }
    
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int>v;
        ListNode* curr = head -> next;
        ListNode* anshead = NULL;
        ListNode* tail = NULL;
        int sum = 0;
        while(curr != NULL){
            if(curr -> val != 0){
                sum += curr -> val;
            }
            else{
                v.push_back(sum);
                sum = 0;
            }
            curr = curr -> next;
        }
        for(auto it : v){
            createLL(anshead , it , tail);
        }
        return anshead;
    }
};