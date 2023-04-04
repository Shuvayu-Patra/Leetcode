class Solution {
public:
    int partitionString(string s) {
        map<char , int>m;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]]++;
            if(m[s[i]] == 2){
                m.clear();
                count++;
                m[s[i]]++;
            }
        }
        return count+1;
    }
};