class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0; i<k; i++){
            int mini = *min_element(nums.begin(), nums.end());
            int mini_Ind = find(nums.begin(), nums.end(), mini) - nums.begin();
            nums[mini_Ind] = mini * multiplier;
        }
        return nums;
    }
};