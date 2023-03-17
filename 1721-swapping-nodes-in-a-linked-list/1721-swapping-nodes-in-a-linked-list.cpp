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
    void arrayToList(ListNode* &anshead , int a , ListNode* &tail){
        ListNode* curr = new ListNode();
        curr -> val = a;
        if(anshead == NULL){
            curr -> next = NULL;
            anshead = curr;
            tail = anshead;
            return;
        }
        
        tail -> next = curr;
        curr -> next = NULL;
        tail = curr;
    }
    
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* anshead = NULL;
        ListNode* tail = NULL;
        
        ListNode* curr = head;
        while(curr != NULL){
            v.push_back(curr -> val);
            curr = curr -> next;
        }
        
        swap(v[k-1] , v[v.size() - k]);
        
        for(auto it : v){
            arrayToList(anshead , it , tail);
        }
        return anshead;
    }
};