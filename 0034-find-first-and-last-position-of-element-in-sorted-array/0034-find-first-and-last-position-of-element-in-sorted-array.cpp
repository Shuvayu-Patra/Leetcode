class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fo = -1, lo = -1;
        int l = 0, h = nums.size()-1;
        while(l <= h){
            int mid = (l+h)/2;
            if(nums[mid] == target){
                fo = mid;
                h = mid - 1;
            }
            else if(nums[mid] > target) h = mid - 1;
            else l = mid + 1;
        }
        
        l = 0, h = nums.size()-1;
        while(l <= h){
            int mid = (l+h)/2;
            if(nums[mid] == target){
                lo = mid;
                l = mid + 1;
            }
            else if(nums[mid] < target) l = mid+1;
            else h = mid - 1;
        }
        return {fo,lo};
    }
};