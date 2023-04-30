class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin() , nums.end());
        while(k!=0){
            int a = nums[nums.size()-1];
            ans+=a;
            nums.pop_back();
            nums.push_back(a+1);
            k--;
        }
        return ans;
    }
};