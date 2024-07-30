class Solution {
public:
    bool isValid(char ch){
        if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch <='9')){
            return true;
        }
        return false;
    }
    
    char toLower(char ch){
        if((ch>='a' and ch <= 'z') or (ch>='0' and ch <= '9')) return ch;
        else{
            char c = ch - 'A' + 'a';
            return c;
        }
    }
    
    bool Palindrome(string str){
        int s = 0;
        int e = str.size() - 1;
        while(s<=e){
            if(str[s] != str[e]) return false;
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0; i<s.length(); i++){
            if(isValid(s[i])) temp.push_back(s[i]);
        }
        
        for(int j=0; j<temp.size(); j++){
            temp[j] = toLower(temp[j]);
        }
        
        if(Palindrome(temp)) return true;
        return false;
    }
};