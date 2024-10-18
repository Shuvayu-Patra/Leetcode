class Solution {
public:
    int ans = 0;
    void func(int ind, vector<int>& nums, int n, int bor, int x){
        if(ind == n){
            if(x == bor){
                ans++;
            }
            return;
        }
        func(ind+1, nums, n, bor, x|nums[ind]);
        func(ind+1, nums, n, bor, x);
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size(), bor = 0;
        for(auto it : nums) bor |= it;
        func(0,nums,n,bor,0);
        return ans;
    }
};