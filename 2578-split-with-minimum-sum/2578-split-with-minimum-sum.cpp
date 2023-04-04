class Solution {
public:
    int splitNum(int num) {
        string str = to_string(num);
        sort(str.begin(),str.end());
        string str1 = "";
        string str2 = "";
        for(int i=0 ; i<str.size() ; i+=2){
            str1.push_back(str[i]);
        }
        for(int i=1 ; i<str.size() ; i+=2){
            str2.push_back(str[i]);
        }
        int num1 = stoi(str1);
        int num2 = stoi(str2);
        return num1+num2;
    }
};