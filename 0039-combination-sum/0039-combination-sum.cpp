class Solution {
public:
    void findAns(int ind, vector<int>& arr, int tar, vector<vector<int>>&ans,vector<int>&ds){
        
        if(ind == arr.size()){
            if(tar == 0) ans.push_back(ds);
                return;
        }
        
        if(arr[ind] <= tar){
            ds.push_back(arr[ind]);
            findAns(ind, arr, tar - arr[ind], ans, ds);
            ds.pop_back();
        }
        findAns(ind+1, arr, tar, ans, ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findAns(0,candidates,target,ans,ds);
        return ans;
    }
};