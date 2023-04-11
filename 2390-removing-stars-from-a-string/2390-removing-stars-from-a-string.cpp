class Solution {
public:
    string removeStars(string s) {
        string a = "";
        for(auto it : s){
            if(it == '*') a.pop_back();
            else a.push_back(it);
        }
        return a;
    }
};