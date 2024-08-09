class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 , r = 0, maxlen = 0, maxfreq = 0;
        unordered_map<char,int> mp(26);
        while(r < s.size()){
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);
            if(((r-l+1) - maxfreq) > k){
                mp[s[l]]--;
                // maxfreq = 0;
                l++;
            }
            if(((r-l+1) - maxfreq) <= k){
                maxlen = max(maxlen, r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};