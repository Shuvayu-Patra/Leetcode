class Solution {
public:
    int charToint(string s){
        int sum = 0;
        for(int i=0 ; i<s.size() ; i++){
            char ch = s[i];
            int val = int(ch) - 97;
            sum = sum*10+val;
        }
        return sum;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum1 = charToint(firstWord);
        int sum2 = charToint(secondWord);
        int sum3 = charToint(targetWord);
        if(sum1+sum2 == sum3) return true;
        else return false;
    }
};