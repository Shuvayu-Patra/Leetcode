class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin() , nums.end());
        int n = nums[nums.size()-1];
        map<int , int>m;
        for(auto it : nums){
            m[it]++;
        }
        for(int i=1 ; i<=nums.size() ; i++){
            if(m.find(i) == m.end()) ans.push_back(i);
        }
        return ans;
    }
};