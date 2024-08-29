class Solution {
public:
    long long func(vector<int> v, int mid){
        long long ans = 0;
        for(int i=0; i<v.size(); i++){
            ans += ceil((double)v[i]/(double)mid);
        }
        return ans;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, hi = *max_element(piles.begin(), piles.end()), ans = 0;
        while(l <= hi){
            int mid = (l+hi)/2;
            long long timeTakes = func(piles,mid);
            if(timeTakes <= h){
                ans = mid;
                hi = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};