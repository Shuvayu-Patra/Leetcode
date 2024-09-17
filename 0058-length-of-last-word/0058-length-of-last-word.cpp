class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        stringstream ss(s);
        string word;
        string temp = "";
        while(ss >> word) temp = word + " " + temp;
        for(int i=0; i<temp.size(); i++){
            if(temp[i] == ' ') break;
            else ans++;
        }
        return ans;
    }
};