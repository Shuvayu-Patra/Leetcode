class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
// *********** BRUTE ***************
        int n = nums.size();
        // vector<int> temp;
        // for(int i=0; i<n; i++){
        //     if(nums[i] != 0) temp.push_back(nums[i]);
        // }
        // int nonZero = temp.size();
        // for(int i=0; i<nonZero; i++){
        //     nums[i] = temp[i];
        // }
        // for(int i=nonZero; i<n; i++){
        //     nums[i] = 0;
        // }
        
// *********** OPTIMAL ***************
        int j=-1;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                j=i;
                break;
            }
        }
        
        if(j == -1) return;
        
        for(int i=j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};