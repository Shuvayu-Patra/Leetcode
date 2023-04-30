class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int a = nums[nums.size()-1];
        int ans = 0;
        for(int i=1 ; i<=k ; i++){
            ans +=  a++;
        }
        return ans;
        
        
        // int ans=0;
        // sort(nums.begin() , nums.end());
        // while(k!=0){
        //     int a = nums[nums.size()-1];
        //     ans+=a;
        //     nums.pop_back();
        //     nums.push_back(a+1);
        //     k--;
        // }
        // return ans;
    }
};