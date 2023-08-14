class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int total = accumulate(nums.begin() , nums.end() , 0);
        for(int i=nums.size()-1 ; i>=0 ; i--){
            if(total - accumulate(ans.begin(), ans.end(), 0) < accumulate(ans.begin(), ans.end(), 0)) break;
            ans.push_back(nums[i]);
            
        }
        sort(ans.begin() , ans.end() , greater<int>());
        return ans;
    }
};