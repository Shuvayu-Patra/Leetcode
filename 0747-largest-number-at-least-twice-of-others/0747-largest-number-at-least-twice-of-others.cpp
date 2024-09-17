class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans = max_element(nums.begin(),nums.end()) - nums.begin();;
        for(int i=0; i<nums.size(); i++){
            if((nums[i]!=nums[ans] )&& (nums[ans]<(2*nums[i]))) return -1;
        }
        return ans;
    }
};