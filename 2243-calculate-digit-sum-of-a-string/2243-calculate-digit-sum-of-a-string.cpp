class Solution {
public:
    string digitSum(string s, int k) {
        
        int sum = 0, i = 0, j = 0;
        while(s.size() > k){
            string ans = "";
            for(i=0; i<s.size(); i+=k){
                for(j=i; j<(i+k); j++){
                    if(j < s.size()) sum += s[j] - '0';
                }
                ans += to_string(sum);
                sum = 0;
            }
            s = ans;
        }
        return s;
    }
};