class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v,ans;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == c) v.push_back(i);
        }
        
        for(int i=0 ; i<s.size() ; i++){
            int shortdistance = INT_MAX;
            for(int j=0 ; j<v.size() ; j++){
                shortdistance = min(shortdistance , abs(i-v[j]));
            }
            ans.push_back(shortdistance);
        }
        return ans;
    }
};