class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = 0;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            if(find(nums.begin() , nums.end() , original) != nums.end()){
                original *= 2;
                ans = original;
            }
            else{
                return original;
            }
        }
        return ans;
    }
};