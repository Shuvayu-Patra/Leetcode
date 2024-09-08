class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long sum = 0;
        long long n = nums.size()-1;
        long long j = 0;
        for(int i=1; i<nums.size(); i++){
            if((j<i) && (nums[i] > nums[j])){
                sum += ((i-j) * nums[j]);
                j = i;
            }
        }
        sum += (n - j)*nums[j];
        return sum;
    }
};