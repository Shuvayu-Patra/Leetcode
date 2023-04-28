class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        for(int i=0 ; i<s.size() ; i++){
            ans += s[i];
            if(s[i] == ' ') k--;
            if(k==0) break;
        }
        //ans.pop_back();
        if(ans[ans.size()-1] == ' ') ans.pop_back();
        return ans;
    }
};