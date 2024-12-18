class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0, cnt=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s.at(i) == '0') cnt++;
            else ans += cnt;
        }
        return ans;
    }
};