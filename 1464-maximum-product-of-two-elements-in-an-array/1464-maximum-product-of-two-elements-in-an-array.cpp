class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto x : nums) pq.push(x);
        int a = pq.top()-1;
        pq.pop();
        int b = pq.top()-1;
        pq.pop();
        return a*b;
    }
};