class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans = 0;
        // map<int , int>mp;
        // for(auto it : nums){
        //     mp[it]++;
        // }
        // for(auto it : mp){
        //     if(it.second == 1) ans += it.first;
        // }
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i] == nums[j]) count++;
            }
            if(count == 1) ans += nums[i];
        }
        return ans;
    }
};