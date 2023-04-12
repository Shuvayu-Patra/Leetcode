class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int>v;
        for(int i=1 ; i<nums.size() ; i+=2){
            v.push_back(min(nums[i] , nums[i-1]));
        }
        return accumulate(v.begin() , v.end() , 0);
    }
}; 