class Solution {
public:
    bool isValid(string S) {
        stack<char>s;
        
        for(int i = 0 ; i < S.size() ; i++){
            char ch = S[i];
            
            //opening bracket -> push
            //closing bracket -> check stack top and pop
            
            if(ch == '(' || ch == '{' || ch == '['){
                s.push(ch);
            }
            else{
                if(!s.empty()){
                    char top = s.top();
                    if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                        s.pop();
                    }
                else{
                    return false;
                    }
                }
                else{
                    return false;
                }
            } 
        }
        if(s.empty()) return true;
        else return false;
    }
};