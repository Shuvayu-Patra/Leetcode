class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int j=0, l=0;
        for(int k=0; k<s.size(); k++){
            if(s[k] != ' '){
                j = k;
                break;
            }
        }
        for(int k=s.size()-1; k>=0; k--){
            if(s[k] != ' '){
                l = k;
                break;
            }
        }
        
        string temp = "";
        
        for(int i=j; i<=l; i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else if(s[i] == ' ' and s[i-1] != ' '){
                ans = temp + " " + ans;
                temp = "";
            }
        }
        ans = temp + " " + ans;
        ans.erase(ans.end()-1);
        return ans;
    }
};