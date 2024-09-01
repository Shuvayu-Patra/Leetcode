class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(auto it : s){
            mp[it]++;
        }
        sort(s.begin(),s.end(), [&](char a, char b){
            if(mp[a] == mp[b]) return a>b;
            else return mp[a] > mp[b];
        });
        return s;
    }
};