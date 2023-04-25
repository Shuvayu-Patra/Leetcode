class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        map<string , int>m1;
        string word;
        stringstream a(s1);
        stringstream b(s2);
        while(a >> word){
            m1[word]++;
        }
        word = "";
        while(b >> word){
            m1[word]++;
        }
        for(auto it : m1){
            if(it.second > 1) continue;
            else ans.push_back(it.first);
        }
        return ans;
    }
};