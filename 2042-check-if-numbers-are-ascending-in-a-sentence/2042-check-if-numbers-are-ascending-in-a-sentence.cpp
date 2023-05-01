class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream x(s);
        string word;
        vector<int>ans;
        while(x >> word){
            if(isdigit(word[0])) ans.push_back(stoi(word));
        }
        for(int i=1 ; i<ans.size() ; i++){
            if(ans[i] <= ans[i-1]) return false;
        }
        return true;
    }
};