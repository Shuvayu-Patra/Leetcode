class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ind = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                ind = i;
                break;
            } 
        }
        for(int i = ind; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[ind], nums[i]);
                ind++;
            }
        }
    }
};