class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = *max_element(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if((nums[i]!=largest )&& largest<(2*nums[i])) return -1;
        }
        int ans = max_element(nums.begin(),nums.end()) - nums.begin();
        return ans;
    }
};