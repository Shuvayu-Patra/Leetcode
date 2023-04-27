class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>v,ans;
        stringstream x(text);
        string word;
        while(x >> word) v.push_back(word);
        for(int i=0 ; i<v.size()-2 ; i++){
            if(v[i]==first and v[i+1]==second) ans.push_back(v[i+2]);
        }
        return ans;
    }
};