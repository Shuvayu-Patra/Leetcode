class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int mini = INT_MIN;
        int n = nums.size();
        stack<int>s;
        for(int i=n-1; i>=0; i--){
            if(nums[i] < mini) return true;
            else{
                while(!s.empty() && nums[i]>s.top()){
                    mini = s.top();
                    s.pop();
                }
                s.push(nums[i]);
            }
        }
        return false;
    }
};