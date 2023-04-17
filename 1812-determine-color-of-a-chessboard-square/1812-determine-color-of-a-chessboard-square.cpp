class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char ch = coordinates[0];
        int n = int(ch);
        if((n+coordinates[1]) % 2 == 0) return false;
        else return true;
    }
};