class Solution {
public:
    bool isValid(string s , map<char,int>&mp){
        map<char , int>m;
        for(auto it : s){
            m[it]++;
        }
        for(auto it : s){
            if(m[it] > mp[it]) return false;
        }
        return true;
    }
    
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>m;
        int ans = 0;
        for(auto it : chars){
            m[it]++;
        }
        for(int i=0 ; i<words.size() ; i++){
            if(isValid(words[i] , m)) ans+=words[i].size();
        }
        return ans;
    }
};