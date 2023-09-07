class Solution {
public:
    static bool cmp(pair<char,int>&a , pair<char,int>&b){
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        string ans = "";
        vector<pair<char,int>>v;
        map<char , int > mp;
        for(auto it : s) mp[it]++;
        for(auto it : mp) v.push_back(it);
        sort(v.begin(),v.end(),cmp);
        for(auto it : v){
            for(int i=0; i<it.second; i++){
                ans += it.first;
            }
        }
        return ans;
    }
};