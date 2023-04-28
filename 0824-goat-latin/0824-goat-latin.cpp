class Solution {
public:
    bool isvowel(char x)
        {
            return (x=='A' || x== 'E' ||x=='I' || x== 'O' || x=='U' || x=='a' || x== 'e' ||x=='i' || x== 'o' || x=='u');
        }
    
    string toGoatLatin(string S) {
        S+=' ';                         //adding space to string for separating words
        string ans,s;
        string x="a";                    // to store a
        for(int i=0;i<S.length();i++)
        {
            if(S[i]==' ')                  //extracted a word
            {   
                if(isvowel(s[0]))            // if vowel
                    s+="ma";
                else                            // if consonant
                {
                    char c=s[0];
                    s=s.substr(1);
                    s+=c;
                    s+="ma";
                }
                s+=x;ans+=s;ans+=" ";           //adding those extra "a" to end
                x+="a";
                s="";
            }
            else
                s+=S[i];                  //constructing a word
        }
        ans.pop_back();                    //removing the last space added previously in ans
        return ans;
    }
};