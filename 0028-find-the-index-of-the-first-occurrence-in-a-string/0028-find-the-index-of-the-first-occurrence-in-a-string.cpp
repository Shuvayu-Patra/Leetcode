class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;
        int ans = -1;
         for(int i=0; i<=(haystack.size()-needle.size()); i++){
             string str = haystack.substr(i,needle.size());
             if(str == needle){
                 ans = i;
                 break;
             }
         }
        return ans;
    }
};