class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = words.size();
        for(int i=0 ; i<words.size() ; i++){
            string a = words[i];
            for(int i=0 ; i<a.size() ; i++){
                if(s[i] != a[i]){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};