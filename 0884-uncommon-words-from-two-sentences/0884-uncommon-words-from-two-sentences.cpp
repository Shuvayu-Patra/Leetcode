class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        map<string,int>m;
        stringstream ss1(s1);
        string word;
        while(ss1 >> word) m[word]++;
        stringstream ss2(s2);
        while(ss2 >> word) m[word]++;
        for(auto it : m){
            if(it.second == 1) ans.push_back(it.first);
        }
        return ans;
    }
};