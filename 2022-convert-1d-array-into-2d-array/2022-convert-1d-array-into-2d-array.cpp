class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        if((m*n) != o.size()) return {};
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0; i<o.size(); i++){
            temp.push_back(o[i]);
            if(temp.size() == n){
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};