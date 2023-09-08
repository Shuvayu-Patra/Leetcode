class Solution {
public:
    int getPower(int a){
        int count = 0;
        while(a != 1){
            count++;
            if(a&1){
                a = 3*a+1;
            }
            else{
                a /= 2;
            }
        }
        return count;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> ans;
        for(int i=lo; i<=hi; i++){
            ans.push_back({i, getPower(i)});
        }
        sort(ans.begin(), ans.end(), [](const pair<int,int>&a,const pair<int,int>&b){
            if(a.second == b.second) return a.first<b.first;
            else return a.second<b.second;
        });
        return ans[k-1].first;
    }
};