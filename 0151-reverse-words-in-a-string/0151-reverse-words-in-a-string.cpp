class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stringstream ss(s);
        string word;
        while(ss >> word){
            ans = word + " " + ans;
        }
        ans.erase(ans.end()-1);
        return ans;
    }
};