class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[ind+1] = nums[i];
                ind++;
            }
        }
        return ind+1;
    }
};