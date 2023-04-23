class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0 , j=s.size();
        while(i<j){
            while(i<j and !isalpha(s[i])) i++;
            while(i<j and !isalpha(s[j])) j--;
            swap(s[i] , s[j]);
            i++;
            j--;
        }
        return s;
    }
};