class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;
        int zerosCount = 0;
        int maxlen = 0;
        while(r < n){
            if(nums[r] == 0) zerosCount++;
            // while(zerosCount > k){
            //     if(nums[l] == 0){
            //         zerosCount--;
            //         l++;
            //     } 
            // }
            if(zerosCount > k){
                if(nums[l] == 0) zerosCount--;
                l++;
            }
            if(zerosCount <= k){
                int len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            r++;
        }
        return maxlen;
    }
};