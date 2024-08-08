class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int n = s.length();
        int l = 0, r = 0;
        int maxlen = 0;
        while(r < n){
            if(mp[s[r]] != -1){ //Inside the mp, already seen
                if(mp[s[r]] >= l){ // now checking range if inside range
                    l = mp[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxlen = max(len, maxlen);
            mp[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};