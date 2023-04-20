class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones=0 , maxi=0;
        for(auto it : nums){
            if(it==0){
                maxi = max(maxi,ones);
                ones=0;
            }
            else ones++;
        }
        return max(maxi,ones);
    }
};