class Solution {
public:
    bool checkRecord(string s) {
        return s.find("LLL") == string::npos && count(s.begin(), s.end(), 'A')<=1;
    }
};