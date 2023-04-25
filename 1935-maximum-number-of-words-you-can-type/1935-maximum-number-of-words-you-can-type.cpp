class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool isBroken = 0;
        int count = 0;
        for(int i=0 ; i<text.size() ; i++){
            for(int j=0 ; j<brokenLetters.size() ; j++){
                if(text[i] == brokenLetters[j]) isBroken = 1;   
            }
            if(text[i] == ' ' or i==text.size()-1){
                if(isBroken == 0) count++;
                else isBroken=0;
            }
        }
        return count;
    }
};