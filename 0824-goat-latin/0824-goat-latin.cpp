class Solution {
public:
    string toGoatLatin(string sentence) {
        string res,word,a="a";
        stringstream ss(sentence);
        while(ss>>word){    
			if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'||word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U')
                res+=word+"ma";
            else
                res+=word.substr(1)+word[0]+"ma";
            res+=a+" ";
            a+="a";
        }
        return res.substr(0,res.size()-1);
    }
};