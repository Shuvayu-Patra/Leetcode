class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        for(int i=2 ; i<s.size() ; i++){
            string temp = "";
            temp += s[i];
            temp += s[i-1];
            temp += s[i-2];
            set<char>st;
            for(auto it : temp) st.insert(it);
            if(st.size() == temp.size()) count++;
        }
        return count;
    }
};