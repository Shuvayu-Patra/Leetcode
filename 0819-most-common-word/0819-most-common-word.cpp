class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        string ans;
        unordered_map<string, int>m;
        for(auto &c: p) c = ispunct(c) ? ' ' : tolower(c);
        stringstream s(p);
        string word;
        while(s >> word) m[word]++;
        for(auto it : b) m[it] = 0;
        int cnt = 0;
        for(auto it : m){
            if(it .second > cnt){
                ans = it.first;
                cnt = it.second;
            }
        }
        return ans;
    }
};