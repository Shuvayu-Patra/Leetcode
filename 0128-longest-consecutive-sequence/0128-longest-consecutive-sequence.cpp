class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int lastSmallest = INT_MIN;
        int cnt = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            if((nums[i] - 1) == lastSmallest){
                cnt++;
                lastSmallest = nums[i];
            }
            else if(nums[i] != lastSmallest){
                cnt = 1;
                lastSmallest = nums[i];
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};