class Solution {
public:
    char shift(char c , int x){
        int a = x-'0';
        return c+a;
    }
    
    string replaceDigits(string s) {
        string ans = "";
        for(int i=0 ; i<s.size() ; i++){
            if(i&1){
                ans.push_back(shift(s[i-1], s[i]));
            }
            else ans.push_back(s[i]);
        }
        return ans;
    }
};