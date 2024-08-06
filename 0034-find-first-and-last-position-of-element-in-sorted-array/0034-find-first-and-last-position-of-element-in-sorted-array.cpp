class Solution {
public:
    int LowerBound(vector<int>& arr, int target){
        int n = arr.size();
        int l = 0, h = n-1;
        int ans = n;
        while(l <= h){
            int mid = l + (h - l)/2;
            if(arr[mid] >= target){
                ans = mid;
                h = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
    
    int UpperBound(vector<int>& arr, int target){
        int n = arr.size();
        int l = 0, h = n-1;
        int ans = n;
        while(l <= h){
            int mid = l + (h - l)/2;
            if(arr[mid] > target){
                ans = mid;
                h = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = LowerBound(nums,target);
        if((lb == n) || (nums[lb] != target)) return {-1,-1};
        return {lb, UpperBound(nums,target) - 1};
    }
};