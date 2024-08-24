class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans = INT_MAX;
        double n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++){
            double mini =  nums[0];
            double maxi = nums[nums.size() - 1];
            double avg = (mini + maxi)/2;
            ans = min(ans, avg);
            nums.erase(nums.begin());
            nums.erase(nums.end());
        }
        return ans;
    }
};