class Solution {
public:
    bool isvowel(char x)
        {
            return (x=='A' || x== 'E' ||x=='I' || x== 'O' || x=='U' || x=='a' || x== 'e' ||x=='i' || x== 'o' || x=='u');
        }
    
    string toGoatLatin(string S) {
        S+=' ';      
        string ans,s;
        string x="a";              
        for(int i=0;i<S.length();i++)
        {
            if(S[i]==' ')     
            {   
                if(isvowel(s[0])) 
                    s+="ma";
                else     
                {
                    char c=s[0];
                    s=s.substr(1);
                    s+=c;
                    s+="ma";
                }
                s+=x;ans+=s;ans+=" ";    
                x+="a";
                s="";
            }
            else
                s+=S[i];                 
        }
        ans.pop_back(); 
        return ans;
    }
};