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
        
//*******************************************************       
//         map<ListNode * , bool>visited;
//         if(head == NULL){
//             return false;
//         }
//         ListNode *curr = head;
//         while(curr != NULL){
            
//             if(visited[curr] == true){
//                 return true;
//             }
//             visited[curr] = true;
//             curr = curr -> next;
//         }
//         return false;
        
//*********************************************************
        
        //Floyd Cycle Detection
        
        if(head == NULL || head -> next == NULL){
            return false;
        }  
        ListNode *slow = head;
        ListNode *fast = head;
            
        while(slow != NULL && fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }
            slow = slow -> next;
            if(slow == fast) return true;
        }
        return false;
    }
};