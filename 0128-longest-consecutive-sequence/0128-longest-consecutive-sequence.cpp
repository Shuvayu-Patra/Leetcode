class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int lastSmall = INT_MIN;
        int cnt = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            if((nums[i] - 1) == lastSmall){
                cnt++;
                lastSmall = nums[i];
            }
            if(nums[i] != lastSmall){
                cnt = 1;
                lastSmall = nums[i];
            }
            ans = max(ans , cnt);
        }
        return ans;
    }
};