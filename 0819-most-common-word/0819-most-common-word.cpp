class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        string ans;
        map<string,int>m;
        for(auto &it : p){
            it = isalpha(it)?tolower(it) : ' ';
        }
        stringstream s(p);
        string word;
        while(s >> word){
            // string temp = "";
            // for(int i=0; i<word.length(); i++){
            //     if(isalpha(word[i])) temp = temp + (char)tolower(word[i]);
            // }
            m[word]++;
        }
        for(auto it: b) m[it] = 0;
        int cnt = 0;
        for(auto it : m){
            if(it.second > cnt){
                ans = it.first;
                cnt = it.second;
            }
        }
        return ans;
    }
};