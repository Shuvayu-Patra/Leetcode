class Solution {
public:
    string reformatDate(string date) {
        string y = "";
        for(int i=date.size()-4 ; i<date.size() ; i++){
            y += date[i];
        }
        
        string m = "";
        unordered_map<string, string>mp;
        mp = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
        for(int i=date.size()-8 ; i<date.size()-5 ; i++){
            m += date[i];
        }
        string d = "";
        if(isdigit(date[1])){
            d += date[0];
            d += date[1];
        }
        else{
            d += '0';
            d += date[0];
        }
        
        return y + '-' + mp[m] + '-' + d;
    }
};