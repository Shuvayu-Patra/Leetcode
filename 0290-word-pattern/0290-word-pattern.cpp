class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss >> word) v.push_back(word);
        if(p.size() != v.size()) return false;
        unordered_map<char, string>m1;
        unordered_map<string, char>m2;
        for(int i=0; i<p.size(); i++){
            if((m1.find(p[i]) != m1.end()) && (m1[p[i]] != v[i])) return false;
            else if(m2.find(v[i]) != m2.end() && (m2[v[i]] != p[i])) return false;
            m1[p[i]] = v[i];
            m2[v[i]] = p[i];
        }
        return true;
    }
};