class Solution {
    int getdigits(int x){
        int i = 0;
        while(x != 0){
            i += x%10;
            x /= 10;
        }
        return i;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin() , nums.end() , 0);
        int sum2 = 0;
        for(auto it : nums){
            sum2 += getdigits(it);
        }
        return abs(sum - sum2);
    }
};