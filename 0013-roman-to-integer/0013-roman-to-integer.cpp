class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(i>0 and s[i] == 'V' and s[i-1] == 'I'){
                ans+=4;
                i--;
            } 
            else if(i>0 and s[i] == 'X' and s[i-1] == 'I'){
                ans+=9;
                i--;
            } 
            else if(i>0 and s[i] == 'L' and s[i-1] == 'X'){
                ans+=40;
                i--;
            } 
            else if(i>0 and s[i] == 'C' and s[i-1] == 'X'){
                ans+=90;
                i--;
            } 
            else if(i>0 and s[i] == 'D' and s[i-1] == 'C'){
                ans+=400;
                i--;
            } 
            else if(i>0 and s[i] == 'M' and s[i-1] == 'C'){
                ans+=900;
                i--;
            }
            else if(s[i] == 'I') ans+=1;
            else if(s[i] == 'V') ans+=5;
            else if(s[i] == 'X') ans+=10;
            else if(s[i] == 'L') ans+=50;
            else if(s[i] == 'C') ans+=100;
            else if(s[i] == 'D') ans+=500;
            else if(s[i] == 'M') ans+=1000;
        }
        // if(s.size() == 2) return ans;
        // if(s[0] == 'I') ans += 1;
        // else if(s[0] == 'V') ans+=5;
        // else if(s[0] == 'X') ans+=10;
        // else if(s[0] == 'L') ans+=50;
        // else if(s[0] == 'C') ans+=100;
        // else if(s[0] == 'D') ans+=500;
        // else if(s[0] == 'M') ans+=1000;
        return ans;
    }
};