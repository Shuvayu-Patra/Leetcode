class Solution {
public:
    
    int sum(int i , int x , vector<int>nums , int n){
        if(i==n) return x;
        int sum1 = sum(i+1 , x^nums[i] , nums , n);
        int sum2 = sum(i+1 , x , nums , n);
        return sum1+sum2;
    }
    
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return sum(0 , 0 , nums , n);
    }
};