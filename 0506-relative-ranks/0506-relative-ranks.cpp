class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        vector<int>v = score;
        sort(v.begin(), v.end(), greater<int>());
        vector<string>medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        unordered_map<int, string>m;
        for(int i=0; i<v.size(); i++){
            if(i < 3) m[v[i]] = medals[i];
            else m[v[i]] = to_string(i+1);
        }
        for(auto it : score) ans.push_back(m[it]);
        return ans;
    }
};