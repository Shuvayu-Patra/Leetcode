class Solution {
public:
    string decodeMessage(string key, string message) {
        string alpha, op; // alpha is string of all the alphabets(26)
        unordered_map<char,char>map; // map first occurance of each char in key with string alpha
        for(char i='a';i<='z';i++){
            alpha.push_back(i);
        }
        
        int j = 0;
        // map first occurance of each char in key with string alpha
        for(int i=0;i<key.length();i++){
            if(key[i]==' ')
                continue;
            if(map.find(key[i]) == map.end()){
                map[key[i]] = alpha[j];
                j++;
            }
        }
        
        // Decode the message string using the map formed above
        for(int i=0;i<message.length();i++){
            if(message[i] == ' ')
                op.push_back(' ');
            else
                op.push_back(map[message[i]]);
        }
        return op;
    }
};