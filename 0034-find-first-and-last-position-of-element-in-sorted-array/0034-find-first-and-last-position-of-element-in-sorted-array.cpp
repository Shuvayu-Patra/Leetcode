class Solution {
public:
    int firstOcc(vector<int>& arr, int target){
        int n = arr.size();
        int l = 0, h = n-1;
        int ans = -1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(arr[mid] == target){
                ans = mid;
                h = mid - 1;
            }
            else if(arr[mid] < target) l = mid+1;
            else h = mid-1;
        }
        return ans;
    }
    
    int lastOcc(vector<int>& arr, int target){
        int n = arr.size();
        int l = 0, h = n-1;
        int ans = -1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(arr[mid] == target){
                ans = mid;
                l = mid+1;
            }
            else if(arr[mid] < target) l = mid + 1;
            else h = mid - 1;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums,target);
        if(first == -1) return {-1,-1};
        int last = lastOcc(nums,target);
        return {first,last};
    }
};