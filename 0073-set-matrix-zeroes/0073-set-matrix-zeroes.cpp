class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int>row(m.size(),0);
        vector<int>col(m[0].size(),0);
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[0].size(); j++){
                if(m[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[0].size(); j++){
                if(row[i]|| col[j]){
                    m[i][j] = 0;
                }
            }
        }
    }
};