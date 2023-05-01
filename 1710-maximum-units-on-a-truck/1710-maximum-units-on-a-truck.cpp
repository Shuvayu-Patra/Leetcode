class Solution {
public:
    static bool cmp(vector<int>&a , vector<int>&b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin() , b.end() , cmp);
        int ans = 0;
        for(auto x: b){
            if(x[0] > t) ans += t*x[1];
            else ans += x[0]*x[1];
            t -= x[0];
            if(t <= 0) break;
        }
        
        return ans;
    }
};