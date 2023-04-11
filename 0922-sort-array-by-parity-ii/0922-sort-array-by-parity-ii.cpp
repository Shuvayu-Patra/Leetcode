class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        for(auto it : nums){
            if(it&1) v2.push_back(it);
            else v1.push_back(it);
        }
        vector<int>ans;
        for(int i=0 ; i<nums.size()/2 ; i++){
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }
        return ans;
    }
};