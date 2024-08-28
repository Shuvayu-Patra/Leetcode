class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int l = 0, h = nums.size() - 1;
        while(l <= h){
            int mid = (l+h)/2;
            if(nums[l] <= nums[mid]){
                ans = min(ans,nums[l]);
                l = mid + 1;
            }
            else{
                ans = min(ans,nums[mid]);
                h = mid - 1;
            }
        }
        return ans;
    }
};