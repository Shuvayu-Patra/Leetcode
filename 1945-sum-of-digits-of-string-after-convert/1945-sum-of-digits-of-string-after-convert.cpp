class Solution {
public:
    int getLucky(string s, int k) {
        long long ans = 0;
        string temp = "";
        for(auto it : s){
            temp += to_string(it - 'a' + 1);
        }
        while(k--){
            long long sum = 0;
            for(int i=0; i<temp.size(); i++){
                sum += temp[i] - '0';
            }
            ans = sum;
            temp = to_string(sum); 
        }
        return ans;
    }
};