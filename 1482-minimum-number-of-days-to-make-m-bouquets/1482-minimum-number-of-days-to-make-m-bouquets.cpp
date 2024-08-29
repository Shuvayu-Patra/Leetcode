class Solution {
public:
    bool func(vector<int>v, int mid, int m , int k){
        int cnt = 0,noOfBoq = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] <= mid){
                cnt++;
            }
            else cnt=0;
            if(cnt == k){
                noOfBoq++;
                cnt = 0;
            }
        }
        return noOfBoq >= m;
    }
    
    
    int minDays(vector<int>& b, int m, int k) {
        int n = b.size(), ans = 0;
        if(((double)(m)*(double)(k)) > n) return -1;
        int l = 1, h=*max_element(b.begin(),b.end());
        while(l <= h){
            int mid = (l+h)/2;
            bool canMake = func(b, mid, m, k);
            if(canMake){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return l;
    }
};