class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0; 
        char s = 'a';
        for(int i=0 ; i<word.size() ; i++){
            int d = abs(s-word[i]);
            ans += min(d , (26-d));
            s = word[i];
        }
        return ans+word.size();
    }
};