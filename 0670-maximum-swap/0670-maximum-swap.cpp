class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        vector<int>v(10,-1);
        for(int i=0; i<str.size(); i++){
            v[str[i] - '0'] = i;
        }
        for(int i=0; i<str.size(); i++){
            for(int j=9; j > str[i] - '0'; j--){
                if(v[j] > i){
                    swap(str[v[j]] , str[i]);
                    return stoi(str);
                }
            }
        }
        return num;
    }
};