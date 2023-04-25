class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>v(26,0);
        for(int i=0 ; i<s.size() ; i++){
            for(int j=i+1 ; j<s.size() ; j++){
                if(s[j] == s[i]){
                    v[s[i] - 'a'] = j-i-1;
                    if(distance[s[i] - 'a'] != v[s[i] - 'a']) return false;
                }
            }
        }
        return true;
    }
};