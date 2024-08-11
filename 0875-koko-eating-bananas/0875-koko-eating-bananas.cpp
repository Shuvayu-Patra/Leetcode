class Solution {
public:
    int maxE(vector<int>& piles){
        int maxi = INT_MIN;
        for(int i = 0; i<piles.size(); i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }
    
    long long TotalHour(vector<int>& piles, int hr){
        long long ans = 0;
        for(int i=0; i<piles.size(); i++){
            ans += ceil((double)piles[i]/(double)hr);
        }
        return ans;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxE(piles), ans = INT_MAX;
        while(low <= high){
            int mid = (low+high)/2;
            long long totalHr = TotalHour(piles, mid);
            if(totalHr <= h){
                ans = min(ans, mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};