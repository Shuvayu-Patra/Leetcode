class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = search(haystack.begin(), haystack.end(), needle.begin(), needle.end()) - haystack.begin();
        if(ans == haystack.size()) return -1;
        else return ans;
    }
};