class Solution {
public:
    // string convert(string temp,string ans){
    //     int num = stoi(temp);
    //     temp = "";
    //     int i=0;
    //     while(num > 0){
    //         temp[i] = (num%2);
    //         num /= 2;
    //         i++;
    //     }
    //     for(int i=temp.size()-1; i>=0; i--){
    //         ans += temp[i];
    //     }
    //     return ans;
    // }
    
    string convertDateToBinary(string date) {
        string ans = "";
        string temp = "";
        // int n = date.size();
        for(int i=0; i<date.size(); i++){
            if(date[i] != '-') temp += date[i];
            else{
                int num = stoi(temp);
                string t1 = "";
                while(num > 0){
                    t1 += to_string(num%2);
                    num /= 2;
                }
                for(int i=t1.size()-1; i>=0; i--){
                    ans += t1[i]; 
                }
                ans += "-";
                temp = "";
            }
        }
        int num = stoi(temp);
                string t1 = "";
                while(num > 0){
                    t1 += to_string(num%2);
                    num /= 2;
                }
                for(int i=t1.size()-1; i>=0; i--){
                    ans += t1[i]; 
                }
        
        return ans;
    }
};