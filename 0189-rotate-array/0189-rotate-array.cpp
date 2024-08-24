class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int>temp;
        int n = nums.size();
        for(int i=(n-k); i<nums.size(); i++){
            temp.push_back(nums[i]);
        }
        for(auto it : temp) cout << it << " ";
        for(int i=(n-k-1); i>=0; i--){
            nums[k+i] = nums[i];
        }
        int ind = 0;
        for(auto it : temp){
            nums[ind++] = it;
        }
    }
};