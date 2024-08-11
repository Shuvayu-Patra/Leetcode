class Solution {
public:
    bool possible(vector<int>& v, int day, int m, int k){
        int cnt = 0, noOfBoq = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] <= day) cnt++;
            else{
                noOfBoq += (cnt/k);
                cnt = 0;
            }
        }
        noOfBoq += (cnt/k);
        if(noOfBoq >= m) return true;
        return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long temp = m * 1LL * k * 1LL;
        if( bloomDay.size() < temp) return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0; i<bloomDay.size(); i++){
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        int l = mini, h = maxi;
        while(l <= h){
            int mid = (l+h)/2;
            if(possible(bloomDay, mid, m, k) == true){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};