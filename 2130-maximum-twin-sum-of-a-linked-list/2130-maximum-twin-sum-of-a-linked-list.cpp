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
    int pairSum(ListNode* head) {
        vector<int>v;
        ListNode* curr = head;
        while(curr != NULL){
            v.push_back(curr -> val);
            curr = curr -> next;
        }
        int i=0 , j=v.size()-1 , maxi = INT_MIN;
        while(i<=j){
            maxi = max(maxi , v[i++]+v[j--]);
        }
        return maxi;
    }
};