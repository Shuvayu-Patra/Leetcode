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
    void insert(ListNode* &head, ListNode* &tail , int a){
        ListNode* temp = new ListNode(a);
        if(head == NULL){
            head = temp;
            tail = temp;
            tail->next = NULL;
        }
        tail->next = temp;
        temp -> next = NULL;
        tail = temp;
    }
    
    int getCount(ListNode* head){
        int count = 0;
        ListNode* current = head;
        while(current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = getCount(head);
        vector<ListNode*>ans;
        int a = n/k;
        int b = n%k;
        ListNode* temp = head;
        for(int i=0; i<k; i++){
            ListNode* anshead = NULL;
            ListNode* anstail = NULL;
            int c = n/k;
            if(i<b) c++;
            while(c--){
                insert(anshead,anstail,temp->val);
                temp = temp -> next;
            }
            ans.push_back(anshead);
        }
        return ans;
    }
};