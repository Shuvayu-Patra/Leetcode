class Solution {
public:
    int getlen(string s){
        bool flag = false;
        for(auto it : s){
            if(!(isdigit(it))) flag = true;
        }
        if(flag) return s.size();
        else return stoi(s);
    }
    
    int maximumValue(vector<string>& str) {
        int ans = INT_MIN;
        for(int i=0 ; i<str.size() ; i++){
            ans = max(ans , getlen(str[i]));
        }
        return ans;
    }
};