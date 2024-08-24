class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int l = 0, r = 0, zero=0, one = 0, ans = 0;
        while(r < s.size()){
            if(s[r] == '0') zero++;
            else one++;
            while(zero > k and one > k){
                if(s[l] == '0') zero--;
                else one--;
                l++;
            }
            if(zero <= k or one <= k){
                ans += r-l+1;
            }
            r++;
        }
        return ans;
    }
};