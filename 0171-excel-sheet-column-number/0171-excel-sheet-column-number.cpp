class Solution {
public:
    int titleToNumber(string col) {
        int p = 0, ans=0;
        int n = col.size()-1;
        for(int i=n; i>=0; i--){
            ans += pow(26,p)*(col[i]-'A'+1);
            p++;
        }
        return ans;
    }
};