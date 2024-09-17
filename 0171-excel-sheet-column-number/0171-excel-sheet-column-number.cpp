class Solution {
public:
    int titleToNumber(string col) {
        int n = col.size();
        int pointer = 1;
        int ans = (col[n-1] - 'A' + 1);
        for(int i=n-2; i>=0; i--){
            ans += (pow(26, pointer))*(col[i] - 'A' + 1);
            pointer++;
        }
        return ans;
    }
};