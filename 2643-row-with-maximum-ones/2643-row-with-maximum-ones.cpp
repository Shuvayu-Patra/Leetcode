class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans(2,0);
        for(int i=0 ; i<mat.size() ; i++){
            int cnt = count(mat[i].begin() , mat[i].end() , 1);
            
            if(cnt > ans[1]){
                ans[1] = cnt;
                ans[0] = i;
            }
        }
        return ans;
    }
};