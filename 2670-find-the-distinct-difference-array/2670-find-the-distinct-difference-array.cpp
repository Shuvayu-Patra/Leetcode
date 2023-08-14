class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++){
            set<int>s1,s2;
            for(int j=0 ; j<=i ; j++){
                s1.insert(nums[j]);
            }
            for(int k=i+1 ; k<nums.size(); k++){
                s2.insert(nums[k]);
            }
            ans.push_back(s1.size() - s2.size());
        }
        return ans;
    }
};