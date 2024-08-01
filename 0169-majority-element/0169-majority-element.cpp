class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans =0, maxCount= 0, temp =0;
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto it: mp){
            
            if(it.second > maxCount){
                ans = it.first;
                maxCount = it.second;
            }
            
            }
        return ans;
    }
};