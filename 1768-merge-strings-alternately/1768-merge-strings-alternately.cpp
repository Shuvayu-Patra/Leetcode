class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int a = word1.size();
        int b = word2.size();
        int x = max(a,b);
        int y = min(a,b);
        for(int j=0 ; j<y ; j++){
            ans.push_back(word1[j]);
            ans.push_back(word2[j]);
        }
        if(a>b){
            for(int i=y ; i<a ; i++){
                ans.push_back(word1[i]);
            }
        }
        else{
            for( int i=y ; i<b ; i++){
                ans.push_back(word2[i]);
            }
        }
        return ans;
    }
};