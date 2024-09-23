class Solution {
public:
    void findAns(int ind, vector<int>& nums,set<vector<int>> &ans,vector<int> ds){
            if(ind == nums.size()){
                sort(ds.begin(),ds.end());
                ans.insert(ds);
                return;
        }
        ds.push_back(nums[ind]);
        findAns(ind+1, nums, ans, ds);
        ds.pop_back();
        findAns(ind+1, nums, ans, ds);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> temp;
        vector<int>ds;
        findAns(0,nums,temp,ds);
        for (auto it = temp.begin(); it != temp.end(); it++) {
          ans.push_back( * it);
        }
        return ans;
    }
};