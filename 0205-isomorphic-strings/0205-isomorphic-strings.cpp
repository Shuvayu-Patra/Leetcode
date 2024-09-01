class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,bool>visited;
        map<char, char> mp;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]==0 && visited[t[i]] == false){
                mp[s[i]] = t[i];
                visited[t[i]] = true;
            }
            else if(mp[s[i]] != t[i]) return false;
        }
        return true;
    }
};