class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ans=0;
        map<char , int>m;
        for(auto it : s){
            m[it]++;
        }
        
        for(auto it : m){
            if(it.first == letter){
                ans += (it.second*100)/s.size();
            }
        }
        return ans;
    }
};