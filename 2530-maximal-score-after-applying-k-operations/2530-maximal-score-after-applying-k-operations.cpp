class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans = 0;
        priority_queue<int>pq;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        while(!pq.empty() && k--){
            double temp = pq.top();
            pq.pop();
            ans += temp;
            pq.push(ceil(temp/3));    
        }
        return ans;
    }
};